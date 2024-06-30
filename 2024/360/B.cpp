#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;

int main(){
    string s,t;
    cin >> s >> t;

    int n = s.size();
    for(int w=1;w<n;++w){
        for(int c=1;c<=w;++c){
            string comp;
            int quo = n/w;
            int res = n%w;
            for(int i=0;i<quo;++i){
                comp += s[i*w + c-1];
            }
            if(c <= res) comp += s[quo*w+c-1];
            if(comp == t){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
