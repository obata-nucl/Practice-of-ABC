#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n,k;
    cin >> n >> k;

    int count = 0;
    int empty = k;

    rep(i,n){
        int a;
        cin >> a;
        if(empty < a){
            count++;
            empty = k;
        }
        empty -= a;
    }

    count++;

    cout << count << endl;

    return 0;
}
