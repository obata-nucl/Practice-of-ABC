#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> w(n);
    rep(i,n){
        cin >> p[i];
    }
    rep(i,n){
        cin >> w[i];
    }
    set<int> pos;
    map<int,int> weight;
    ll ans=0;
    rep(i,n){
        if(pos.find(p[i]) != pos.end()){
            if(w[i] <= weight[p[i]-1]){
                ans += w[i];
            }
            else{
                ans += weight[p[i]-1];
                weight[p[i]-1] = w[i];
            }
        }
        else{
            pos.insert(p[i]);
            weight[p[i]-1] = w[i];
        }
    }

    cout << ans << endl;
    return 0;
}
