//Altanative solution of 350-C
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    rep(i,n) cin >> a[i+1];

    vector<int> pos(n+1);
    for(int i=1; i <= n; i++){
        pos[a[i]] = i;
    }
    vector<pair<int,int>> ans;

    for(int i=1; i <= n;i++){
        while(a[i] != i){
            int j = pos[i];
            swap(a[i],a[j]);
            swap(pos[a[i]],pos[a[j]]);
            ans.emplace_back(i,j);
        }
    }

    cout << ans.size() << endl;

    for(auto[i,j] : ans){
        cout << i << " " << j << endl;
    }
    

    return 0;

}
