#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;

int main(){
    int n,k,x;
    cin >> n >> k >> x;
    vector<int> arr(n);
    rep(i,n){
        cin >> arr[i];
    }

    arr.insert(arr.begin()+k, x);

    rep(i,n+1){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
