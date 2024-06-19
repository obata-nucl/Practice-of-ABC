#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n;
    cin >> n;
    
    //レベル0のカーペット
    vector<string> s = {"#"};
    rep(ni,n){
        int m=s.size();
        int m3=m*3;
        vector<string> t(m3,string(m3,'#'));
        rep(i,m3){
            rep(j,m3){
                t[i][j] = s[i%m][j%m];
            }
        }
        rep(i,m){
            rep(j,m){
                t[i+m][j+m] = '.';
            }
        }
        s = t;
    }

    rep(i,s.size()){
        cout << s[i] << endl;
    }
    return 0;
}
