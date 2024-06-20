#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;

int main(){
    const int M = 1e8;
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    ll ans = 0;
    rep(i,n){
        ans += a[i]*ll(n-1);
    }

    int r=n;
    ll cnt = 0;

    rep(i,n){
        r = max(r, i+1);
        while(r -1 > i && a[i] + a[r-1] >= M){
            r--;
        }
        cnt += n-r;
    }
    ans -= cnt*M;

    cout << ans << endl;

    return 0;
}