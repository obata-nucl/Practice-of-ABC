#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, int>;

const ll INF = 1e18;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<ll> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<vector<pair<int, ll>>> graph(N);
    for (int i = 0; i < M; ++i) {
        int U, V;
        ll B;
        cin >> U >> V >> B;
        --U, --V;
        graph[U].emplace_back(V, B);
        graph[V].emplace_back(U, B);
    }


    priority_queue<P, vector<P>, greater<P>> pq;
    vector<ll> dist(N, INF);
    dist[0] = A[0];
    pq.emplace(dist[0], 0);

    while (!pq.empty()) {
        ll d = pq.top().first;
        int v = pq.top().second;
        pq.pop();

        if (d > dist[v]) continue;

        for (auto [to, cost] : graph[v]) {
            ll new_dist = dist[v] + cost + A[to];
            if (new_dist < dist[to]) {
                dist[to] = new_dist;
                pq.emplace(new_dist, to);
            }
        }
    }

    for (int i = 1; i < N; ++i) {
        if (dist[i] == INF) {
            cout << "INF" << endl;
        } else {
            cout << dist[i] << " ";
        }
    }

    cout << endl;

    return 0;
}