#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int sum_a =0,sum_b=0;
    rep(i,9){
        int n;
        cin >> n;
        sum_a += n;
    }
    rep(i,8){
        int m;
        cin >> m;
        sum_b += m;
    }

    cout << sum_a - sum_b +1 << endl;
    return 0;
}
