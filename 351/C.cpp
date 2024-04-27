#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int re(vector<int>& a){
    if(a.size() == 1) return 0;
    else if(a[a.size()-1] != a[a.size()-2]) return 0;
    else if(a[a.size()-1] == a[a.size()-2]){
        int in = a.back()+1;
        a.pop_back();
        a.pop_back();
        a.emplace_back(in);
        re(a);
        return 0;
    }

    return 0;
}

int main(){
    int n;
    cin >> n;
    vector<int> ans;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }

    rep(i,n){
        ans.emplace_back(a[i]);
        re(ans);
    }

    cout << ans.size() << endl;

    return 0;
}
