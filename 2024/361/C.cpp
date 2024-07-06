#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;

int main(){
    int n,k;
    cin >> n >> k;
    vector<ll> vec(n);

    rep(i,n){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    ll ans = 100100100100;
    for(int i=0;i<= n-(n-k);++i){
        ans = min(ans , vec[i + (n-k) -1] - vec[i]);
    }

    cout << ans << endl;
    return 0;
}
