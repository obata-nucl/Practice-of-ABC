#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;





int main(){
    int h,w;
    cin >> h >> w;
    int s_i, s_j;
    cin >> s_i >> s_j;
    s_i--, s_j--;
    vector<string> c(h);

    rep(i,h){
        cin >> c[i];
    }

    string X;
    cin >> X;

    for(char x : X){
        if(s_j != 0 && x=='L'){
            if(c[s_i][s_j-1] == '.'){
                s_j--;
            }
        }
        else if(s_j != w-1 && x=='R'){
            if(c[s_i][s_j+1] == '.'){
                s_j++;
            }
        }
        else if(s_i != 0 && x=='U'){
            if(c[s_i-1][s_j] == '.'){
                s_i--;
            }
        }
        else if(s_i != h-1 && x=='D'){
            if(c[s_i+1][s_j] == '.'){
                s_i++;
            }
        }
        else continue;
    }

    s_i++, s_j++;

    cout << s_i << " " << s_j << endl;
    return 0;
}
