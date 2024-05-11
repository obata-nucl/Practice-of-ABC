#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i,n){
        cin >> p[i];
    }
    rep(i,n-1){
        if(p[0] < p[i+1]){
            cout << i+2 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
