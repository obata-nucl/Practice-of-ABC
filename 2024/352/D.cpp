#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n,k;
    cin >> n >> k;

    vector<int> p(n);
    rep(i,n){
        cin >> p[i];
        p[i]--;
    }

    //値p_i から添え字の変換を行うベクトルq
    vector<int> q(n);
    rep(i,n){
        q[p[i]] = i;
    }

    int ans = n;
    set<int> st;

    rep(i,n){
        st.insert(q[i]);
        if(st.size() > k){
            st.erase(q[i-k]);
        }
        if(st.size() == k){
            int mini = *st.rbegin() - *st.begin();
            ans = min(ans, mini);
        }
        
    }

    cout << ans << endl;
    return 0;
    
}
