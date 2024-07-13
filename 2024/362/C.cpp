#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;

int main(){
    int n;
    cin >> n;

    ll L_sum = 0;
    ll res_sum = 0;

    vector<pair<ll,ll>> vec(n);
    vector<ll> res(n);
    vector<ll> ans(n);
    
    rep(i,n){
        cin >> vec[i].first >> vec[i].second;
    }
    rep(i,n){
        res[i] = vec[i].second - vec[i].first;
        ans[i] = vec[i].first;
    }

    rep(i,n){
        L_sum += vec[i].first;
        res_sum += res[i];
    }

    rep(i,n){
        if(L_sum == 0){
            break;
        }
        else{
            ll plus = min(abs(L_sum), res[i]);
            ans[i] += plus;
            L_sum += plus;
        }
    }


    if(L_sum != 0){
        cout << "No" << endl;
        return 0;
    }
    else{
        cout << "Yes" << endl;
    }

    

    rep(i,n){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
