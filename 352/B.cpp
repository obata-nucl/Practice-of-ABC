#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    string s,t;
    cin >> s >> t;
    int id=0;

    for(char c:s){
        for(int i=id;i<t.size();++i){
            if(c == t[i]){
                id = i+1;
                cout << i+1 << " ";
                break;
            }
        }
    }
    cout << endl;
    return 0;
}
