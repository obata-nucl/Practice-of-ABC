#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    string s;
    cin >> s;
    int num;

    if(s.substr(3) == "316"){
        cout << "No" << endl;
        return 0;
    }
    else{
        num = stoi(s.substr(3));
        if(num > 349 || num < 1){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
