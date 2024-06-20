#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int n,m,k;
    cin >> n >> m >> k;

    vector<vector<int>> tests(m);
    vector<char> results(m);

    rep(i,m){
        int c;
        cin >> c;
        tests[i].resize(c);
        rep(j,c){
            cin >> tests[i][j];
            --tests[i][j];
        }
        cin >> results[i];   
    }

    int valid = 0;
    for(int mask=0;mask < (1 << n);++mask){
        bool is_val = true;
        for(int i=0;i<m;++i){
            int o_key=0;
            for(int key : tests[i]){
                if(mask & (1 << key)){
                    o_key++;
                }
            }
            if((results[i] == 'o' && o_key < k) || (results[i] == 'x' && o_key >= k)){
                is_val = false;
                break;
            }
        }

        if(is_val){
            ++valid;
        }
    }

    cout << valid << endl;
    return 0;
}
