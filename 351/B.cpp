#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n;
    cin >> n;

    vector<string> A(n),B(n);
    rep(i,n){
        cin >> A[i];
    }
    rep(i,n){
        cin >> B[i];
    }

    rep(i,n){
        if(A[i] == B[i]) continue;
        else{
            rep(j,n){
                if(A[i][j] != B[i][j]){
                    cout << i+1 << " " << j+1 << endl;
                    return 0;
                }
            }
        }
    }
}
