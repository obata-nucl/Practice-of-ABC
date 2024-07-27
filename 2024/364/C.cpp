#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;

int main(){
    ll n,x,y;
    cin >> n >> x >> y;
    vector<ll> sw(n), sa(n);

    rep(i,n){
        cin >> sw[i];
    }
    rep(i,n){
        cin  >> sa[i];
    }

    vector<pair<int,int>> p(n);
    rep(i,n){
        p[i].first = sw[i];
        p[i].second = sa[i];
    }

    int sweet=n, salty=n;

    sort(p.begin(), p.end(), [](const pair<int,int>&a, const pair<int,int>&b ){
        return a.first > b.first;
    });

    ll sum_sw=0, sum_sa=0;
    rep(i,n){
        sum_sw += p[i].first;
        if(sum_sw > x){
            sweet = i+1;
            break;
        }
    }

    sort(p.begin(), p.end(), [](const pair<int,int>&a, const pair<int,int>&b ){
        return a.second > b.second;
    });

    rep(i,n){
        sum_sa += p[i].second;
        if(sum_sa > y){
            salty = i+1;
            break;
        }
    }

    cout << min(sweet, salty) << endl;
    return 0;


}
