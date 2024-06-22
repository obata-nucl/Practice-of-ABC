#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;

int main(){
    ll a;
    cin >> a;

    ll ans=a/10, res=a%10;

    if(res == 0){
        cout << ans << endl;
        return 0;
    }
    else if(a>0){
        cout << ans+1 << endl;
        return 0;
    }
    else{
        cout << ans << endl;
        return 0;
    }

    return 0;
}
