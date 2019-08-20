#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair <int, int>;
using edge = tuple <int, int, int>;

const int oo { 1000000010 }, MAX { 110 };
int dist[MAX], pred[MAX];
vector<ii> adj[MAX];
bitset<MAX> processed;

void dijkstra(int s, int N){
    for(int i = 0; i < N; i++)
        dist[i] = -1;

    dist[s] = 0;
    processed.reset();

    priority_queue<ii> pq;
    pq.push({0, s});

    while (not pq.empty())
    {
        auto [d, u] = pq.top();
        pq.pop();

        if(processed[u])
            continue;

        for(const auto& [v, w] : adj[u]){
            
            if (dist[v] < d + w){
                dist[v] = d + w;
                pq.push({ dist[v], v });
                pred[v]=u;
            }
        }
    }    
}

int main(int argc, char const *argv[])
{
    int s, d, count=0, vertice=1, ans=0;;
    vector<int> temp;
    string input;

    cin >> s >> d >> input;

    for(const auto& v: input){
        if (count > d){
            cout << "-1" << endl;
            return 0;
        }

        if(v == '1'){
            temp.push_back(vertice);
            count = 0;
        }

        count ++, vertice++;
    }

    for(auto it = temp.begin(); it != temp.end(); it++){
        auto v = *it;
        for(auto pt = (it+1); pt != temp.end(); pt++){
            auto u = *pt;

            if((u - v) > d)
                break;

            adj[v].push_back({u, u-v});
        }
    }

    dijkstra(1, s);

    auto p = s;

    while(p != 1){
        ans++;
        p = pred[p];
    }

    cout << ans << endl;

    return 0;
}
