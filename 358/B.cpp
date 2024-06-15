#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n,a;
    cin >> n >> a;
    int time =0;

    vector<int> row(n);
    rep(i,n){
        cin >> row[i];
    }

    rep(i,n){
        if(time < row[i]){
            time += (row[i] - time);
        }
        time += a;
        cout << time << endl;
    }

    return 0;
}
