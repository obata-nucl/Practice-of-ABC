#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;

ll c2(ll n){
    return n*(n-1)/2;
}

int main(){
    string s;
    cin >> s;

    ll n=s.size();
    ll same = 0;

    map<char, int> cnt;
    for(char c:s) cnt[c]++;
    for(auto p:cnt){
        int m=p.second;
        same += c2(m);
    }

    ll dif = c2(n) - same;
    ll ans = dif;
    if(same){
        ans++;
    }

    cout << ans << endl;
    return 0;

}
