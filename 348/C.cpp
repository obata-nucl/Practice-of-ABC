#include<bits/stdc++.h> //This library can be used only when the compiler is gcc

using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> min_value;

    for(int i=0;i<n;i++){
        int value,color;
        cin >> value >> color;
        if(min_value.find(color) != min_value.end()){
            min_value[color] = min(min_value[color],value);
        }
        else{
            min_value[color] = value;
        }
    }

    int answer= -1;
    for(auto [color, value] : min_value){
        answer = max(answer,value);
    }

    cout << answer << endl;
}