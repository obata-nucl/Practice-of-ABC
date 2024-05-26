#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int a,b;
    cin >> a >> b;
    if(a != b){
        cout << 6-a-b << endl;
        return 0;
    }
    else{
        cout << -1 << endl;
        return 0;
    }
}
