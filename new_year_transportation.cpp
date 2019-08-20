#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;

const int MAX { 30010 };
bitset<MAX> visited;
vector<ll> adj[MAX];

bool flag = false;

void dfs(ll u, ll t){
    if(visited[u])
        return;
    
    visited[u] = true;

    for(const auto& v: adj[u]){
        if (v == t)
            flag = true;
        
        dfs(v, t);
    }
}

int main(int argc, char const *argv[])
{
    ll n, t, aux;

    cin >> n >> t;

   for(ll i = 1; i < n; i++){
        cin >> aux;

        adj[i].push_back(i+aux);
    }

    visited.reset();

    dfs(1, t);

    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}
