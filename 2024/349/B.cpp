#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;

    map<char,int> cnt;
    for(char c : s){
        cnt[c]++;
    }

    map<int,int> cnt2;
    for(auto p : cnt){
        cnt2[p.second]++;
    }

    for(auto p : cnt2){
        if(p.second != 2){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}