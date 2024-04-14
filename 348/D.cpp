#include<bits/stdc++.h>
using namespace std;

struct Med{
    int r,c,e;  //座標{r,c}にエネルギーがeになる薬がある
    Med(){}
    Med(int r, int c, int e): r(r),c(c),e(e){}
};

int main(){
    //マス目を配列sで保存
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i=0;i<h;i++){
        cin >> s[i];
    }

    //薬の位置と状態を配列medで保存
    int n;
    cin >> n;
    vector<Med> med(n);
    for(int i=0;i<n;i++){
        int r,c,e;
        cin >> r >> c >> e;
        r--;c--;
        med[i]= Med(r,c,e);
    }

    //スタートとゴールの座標
    int si=0,sj=0,ti=0,tj=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(s[i][j] == 'S') si = i, sj = j;
            if(s[i][j] == 'T') ti = i, tj = j;
        }
    }

    const int INF = 1001001001;
    //薬のグラフを作成
    vector<vector<int>> to(n);
    for(int sv=0;sv<n;sv++){
        auto [sr,sc,se] = med[sv];  //スタートする頂点(薬)
        vector dist(h, vector<int>(w, INF));    //各マスへの距離
        queue<pair<int,int>> q;
        dist[sr][sc] = 0; q.emplace(sr,sc);     //スタートの位置への距離を0として初期化
        while(!q.empty()){          //queueが空になったらループ終了
            auto [i,j] = q.front(); q.pop();            //(i,j)queueの先端を代入し、qから消去
            
        }
    }
}
