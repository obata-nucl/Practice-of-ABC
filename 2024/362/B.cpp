#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;

int main(){
    int x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    vector<int> a(2),b(2),c(2);
    a = {x2 - x1, y2 - y1};
    b = {x3 - x1, y3 - y1};
    c = {b[0]-a[0] , b[1]-a[1]};

    if( a[0]*b[0] + a[1]*b[1] == 0){
        cout << "Yes" << endl;
        return 0;
    }
    else if(a[0]*c[0] + a[1]*c[1] == 0){
        cout << "Yes" << endl;
        return 0;
    }
    else if(b[0]*c[0] + b[1]*c[1] == 0){
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;   
}
