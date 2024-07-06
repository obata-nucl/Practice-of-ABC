#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;

int main(){
    vector<int> a_a(3),a_b(3),b_a(3),b_b(3);
    rep(i,3) cin >> a_a[i];
    rep(i,3) cin >> a_b[i];
    rep(i,3) cin >> b_a[i];
    rep(i,3) cin >> b_b[i];

    bool flag = true;

    rep(i,3){
        if(a_b[i] <= b_a[i] || a_a[i] >= b_b[i]){
            flag = false;
        }
    }

    if(flag){
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}
