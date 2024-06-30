#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;

int main(){
    string s;
    cin >> s;

    int r,m;
    rep(i,s.size()){
        if(s[i] == 'R') r = i;
        else if(s[i] == 'M') m = i;
    }

    if(r < m){
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
    
}
