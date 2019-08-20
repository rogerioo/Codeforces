#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    map<ll, ll> table;
    vector<ll> aux;
    ll n, k, power, coins;

    cin >> n >> k;

    for(ll i = 0; i < n; i++){
        cin >> power;
        aux.push_back(power);
    }

    for(ll i = 0; i < n; i++){
        cin >> coins;
        table[aux[i]] = coins;
    }

    priority_queue<ll> fila;
    ll sum=0;
    for(auto& item : table){
        auto coin = item.second;

        table[item.first] = coin + sum;
        sum += coin;
        fila.push(-coin);

        if(fila.size() > k){
            sum+= fila.top();
            fila.pop();
        }
    }

    for(ll i = 0; i < n; i++)
        cout << table[aux[i]] << (i < n-1 ? " ": "\n");

    return 0;
}