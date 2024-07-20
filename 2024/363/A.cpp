#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;

int main(){
    int r;
    cin >> r;
    int ans = 100 - (r%100);
    cout << ans << endl;
    return 0;
}
