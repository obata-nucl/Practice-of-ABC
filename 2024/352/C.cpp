#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n;
    cin >> n;
    vector<int> sho(n);
    vector<int> head(n);
    long long sum=0;

    int sbs=0;
    rep(i,n){
        cin >> sho[i] >> head[i];
        if(head[i] - sho[i] > sbs){
            sbs = head[i] - sho[i];
        }
    }

    rep(i,n){
        sum += sho[i];
    }
    cout << sum + sbs << endl;
    return 0;
}
