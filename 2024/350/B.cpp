#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n,q;
    cin >> n >> q;
    int sum=0;

    vector<bool> ans(n);
    rep(i,n){
        ans[i] = true;
    }
    vector<int> sel(q);
    rep(i,q){
        cin >> sel[i];
    }

    for(int c : sel){
        ans[c-1] = !ans[c-1];
    }

    rep(i,n){
        if(ans[i]){
            sum++;
        }
    }

    cout << sum << endl;
    return 0;



}
