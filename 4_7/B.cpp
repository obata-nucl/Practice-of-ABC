#include<bits/stdc++.h> //This library can be used only when the compiler is gcc

using namespace std;

int main(){
    int n;
    cin >> n;   //the number of point is n

    vector<int> x(n),y(n);
    for(int i=0;i<n;i++){       //input coordinates(x,y) of every points
        cin >> x[i] >> y[i];
    }

    for(int i=0;i<n;i++){
        int max_index=0;
        int max_distance=0;
        for(int j=0;j<n;j++){
            if(i != j){
                int distance = pow(x[i]-x[j], 2) + pow(y[i]-y[j], 2);
                if(distance > max_distance){
                    max_distance = distance;
                    max_index = j+1;
                }
            }
        }
        cout << max_index << endl;
    }

    return 0;
}