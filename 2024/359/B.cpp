#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;

int main(){
    int n;
    cin >> n;

    vector<int> color(2*n);
    rep(i,2*n){
        cin >> color[i];
    }
    int ans=0;
    rep(i,2*n -2){
        if(color[i] == color[i+2]){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
