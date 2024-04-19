#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n;
    cin >> n;

    vector<int> is(n);
    vector<int> ans(n-1);

    rep(i,n){
        cin >> is[i];
    }
    rep(i,n-1){
        ans[i] = is[i]*is[i+1];
        cout << ans[i] << " ";
        if(i==n-2){
            cout << endl;
        }
    }
}
