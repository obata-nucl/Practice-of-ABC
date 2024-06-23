#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;


int main(){
    ll sx, sy, tx, ty;
    cin >> sx >> sy;
    cin >> tx >> ty;

    ll ans=0;

    pair<ll,ll> s_cent, t_cent;
    if((sx+sy)%2==0){
        s_cent = make_pair(sx+1, sy);
    }
    else{
        s_cent = make_pair(sx, sy);
    }
    if((tx+ty)%2==0){
        t_cent = make_pair(tx+1, ty);
    }
    else{
        t_cent = make_pair(tx, ty);
    }

    ll del_x = ll(abs(t_cent.first -  s_cent.first)), del_y = ll(abs(t_cent.second - s_cent.second));

    ans = del_y;
    if(del_x >= del_y){
        ans+= ll((del_x-del_y)/2);
    }

    cout << ans << endl;

    return 0;
}