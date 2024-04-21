#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }


    vector<pair<int,int>> ans;
    rep(i,n){
        while(a[i] != i+1){
            int j = a[i];
            swap(a[i],a[j-1]);
            ans.emplace_back(i+1,j);
        }
    }

    cout << ans.size() << endl;
    for(auto[a,b] : ans){
        cout << a << " " << b << endl;
    }
    return 0;
}
