#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> sample (n);
    vector<int> answer = {};

    for(int i=0;i<n;i++){
        cin >> sample[i];
        if(sample[i] % k == 0){
            answer.push_back(sample[i] / k);
        }
    }

    rep(i,answer.size()){
        cout << answer[i] << " ";
        if(i == answer.size()-1){
            cout << endl;
        }
    }

    return 0;

}
