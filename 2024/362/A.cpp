#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;

int main(){
    int r,g,b;
    cin >> r >> g >> b;
    string s;
    cin >> s;
    if(s == "Red"){
        cout << min(g,b) << endl;
        return 0;
    }
    else if(s == "Green"){
        cout << min(r,b) << endl;
        return 0;
    }
    cout << min(r,g) << endl;
    return 0;
}
