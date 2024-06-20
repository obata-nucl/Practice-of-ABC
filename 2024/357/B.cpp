#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    string s;
    cin >> s;

    int num_c=0;
    for(char c:s){
        if(isupper(c)){
            num_c++;
        }
    }
    if(s.size() - num_c < num_c){
        for(char &d:s){
            if(islower(d)){
                d -= 32;
            }
        }
    }
    else{
        for(char &e:s){
            if(isupper(e)){
                e += 32;
            }
        }
    }
    cout << s << endl;
    return 0;
}
