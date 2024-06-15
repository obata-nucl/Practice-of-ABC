#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n,m;
    cin >> n >> m;

    vector<int> hand(n);

    rep(i,n){
        cin >> hand[i];
    }
    rep(i,n){
        m -= hand[i];
        if(m < 0){
            cout << i << endl;
            return 0;
        }
    }

    cout << n << endl;
    return 0;
}
