#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n,l,r;
    cin >> n >> l >> r;

    rep(i,l-1){
        cout << i+1 << " ";
    }
    for(int i=r-1;i>l-2;--i){
        cout << i+1 << " ";
    }
    for(int i=r;i<n;++i){
        cout << i+1 << " ";
    }
    cout << endl;
    return 0;
}
