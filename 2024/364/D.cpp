#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;

int main(){
    int n,q;
    cin >> n >> q;

    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    rep(qi,q){
        int b,k;
        cin >> b >> k;
        //範囲wjの中にk個点が存在するか判定する関数
        auto f = [&](int wj) -> bool{
            int left = b-wj, right = b+wj;
            int li = lower_bound(a.begin(), a.end(), left) - a.begin();
            int ri = lower_bound(a.begin(), a.end(), right + 1) - a.begin();
            return ri-li >= k;
        };

        int ac = 2e8, wa = -1;
        while(wa+1 < ac){
            int wj = (ac+wa)/2;
            if(f(wj)) ac = wj;
            else wa = wj;
        }
        cout << ac << "\n";
    }

    return 0;
}
