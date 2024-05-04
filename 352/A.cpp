#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n,x,y,z;
    cin >> n >> x >> y >> z;

    if(z > x && z < y){
        cout << "Yes" << endl;
    }
    else if(z < x && z > y){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
    return 0;
}
