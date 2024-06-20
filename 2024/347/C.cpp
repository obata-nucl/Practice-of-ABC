#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    vector<int> hol(n);

    rep(i,n){
        cin >> hol[i];
    }

    //予定がそれぞれhol[i]日後にあるが重要なのは、1週間がa+b日の世界で[曜日]に対応する hol[i] / (a+b) である。
    rep(i,n){
        hol[i] = hol[i] % (a+b);
    }

    sort(hol.begin(),hol.end());

    hol.push_back(hol[0]+a+b);


    rep(i,n){
        if(hol[i+1]-hol[i] > b){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;

}
