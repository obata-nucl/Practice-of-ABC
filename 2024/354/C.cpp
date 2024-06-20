#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n;
    cin >> n;

    vector<int> a(n), c(n);
    rep(i,n){
        cin >> a[i] >> c[i];
    }

    vector<int> is(n);
    rep(i,n) is[i]=i;
    //強さaが大きい順に並べたときのカード番号を配列isに保存
    sort(is.begin(), is.end(), [&](int i, int j){
        return a[i] > a[j];
    });

    vector<int> ans;
    for(int i : is){
        if(ans.size()==0){
            ans.push_back(i);
        }
        else if(c[i] < c[ans.back()]){
            ans.push_back(i);
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    rep(i,ans.size()){
        cout << ans[i]+1 << " ";
    }
    cout << endl;
    return 0;



    
}
