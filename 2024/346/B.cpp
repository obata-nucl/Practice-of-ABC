#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

const string s = "wbwbwwbwbwbw";

int main(){
    int w,b;
    cin >> w >> b;
    int sum = w+b;

    rep(i,s.size()){
        int nw = 0,nb = 0;
        rep(j,w+b){
            if(s[(i+j) % (s.size())] == 'w'){
                ++nw;
            }
            else{
                ++nb;
            }
        }
        if(nw == w && nb == b){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
