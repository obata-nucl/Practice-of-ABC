#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)


int main(){
    int n,k;
    cin >> n >> k;

    set<int> array;
    rep(i,n){
        int a;
        cin >> a;
        if(a <= k){
            array.insert(a);
        }
    }

    long long sum =(long long) k* (k+1) / 2;

    for(int i: array){
        sum -= i;
    }



    cout << sum << endl;
    return 0;
}
