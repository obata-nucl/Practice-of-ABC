#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> ele(m);

    rep(i,m){
        cin >> ele[i];
    }

    vector<int> food_i(m);
    rep(i,n){
        rep(j,m){
            cin >> food_i[j];
        }
        rep(j,m){
            ele[j] -= food_i[j];
        }
    }

    rep(j,m){
        if(ele[j] > 0){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;

}
