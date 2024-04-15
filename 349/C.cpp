#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;

    for(int i=0;i<3;i++){        //文字列Tを小文字に変換
        t[i] = tolower(t[i]);
    }

    //文字列xが文字列Sの部分列かを判定する関数を定義(ラムダ式)
    auto IsSubarray = [&] (string x) -> bool {
        int xi = 0;         //文字列xのi文字目を表す添え字
        for(char c : s){
            if(x[xi] == c) xi++;
            if(xi == s.size()) return true;
        }
        return false;
    };

    if(IsSubarray(t)){
        cout << "Yes" << endl;
        return 0;
    }

    if(t.back() == 'x'){
        t.pop_back();
        if(IsSubarray(t)){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
