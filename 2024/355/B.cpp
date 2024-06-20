#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    set<int> a_element;
    rep(i,n){
        cin >> a[i];
        a_element.insert(a[i]);
    }
    rep(i,m){
        cin >> b[i];
    }
    a.insert(a.end(),b.begin(),b.end());
    sort(a.begin(),a.end());

    rep(i,n+m-1){
        if(a_element.count(a[i]) && a_element.count(a[i+1])){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;

}
