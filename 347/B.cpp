#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    string s;
    cin >> s;

    set<string> ans;
    rep(i,s.size()){
        rep(j,s.size()){
            ans.insert(s.substr(j,i));
        }
    }

    cout << ans.size() << endl;
}
