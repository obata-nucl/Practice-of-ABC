#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)


int main(){
    int n,m;
    cin >> n >> m;
    vector<string> pop(n);

    rep(i,n){
        cin >> pop[i];
    }

    int all = (1 << m) -1;
    int ans = 100;

    for(int mask=1;mask < (1<<n);++mask){
        int covered=0;
        int count =0;

        rep(i,n){
            if(mask & (1<<i)){
                ++count;
                rep(j,m){
                    if(pop[i][j] == 'o'){
                        covered |= (1<<j);
                    }
                }
            }
        }
        if(covered == all){
            ans = min(ans, count);
        }
    }

    cout << ans << endl;
    return 0;

}
