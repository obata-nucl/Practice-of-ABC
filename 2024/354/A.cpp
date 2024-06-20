#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    int h;
    cin >> h;

    int days = 0;
    int sum = 0;
    while(sum <= h){
        sum += pow(2,days);
        days++;
    }

    cout << days << endl;
    
    return 0;
}
