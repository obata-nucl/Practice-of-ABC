#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n;
    cin >> n;
    vector<string> name(n);
    vector<int> rate(n);
    rep(i,n){
        cin >> name[i];
        cin >> rate[i];
    }
    sort(name.begin(),name.end());

    int t = 0;
    rep(i,n){
        t += rate[i];
    }
    cout << name[t % n] << endl;
    return 0;
}