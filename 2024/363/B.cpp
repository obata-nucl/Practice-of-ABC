#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;


int main(){
    int n,t,p;
    cin >> n >> t >> p;
    vector<int> l(n);
    rep(i,n){
        cin >> l[i];
    }

    sort(l.rbegin(), l.rend());
    int sum=0;
    rep(i,n){
        if(l[i] >= t) sum++;
    }
    if(sum >= p){
        cout << 0 << endl;
        return 0;
    }


    cout << t - l[p-1] << endl;
    return 0;
}