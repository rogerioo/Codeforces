#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    ll n, m, aux;
    vector<ll> array, range;
    set<ll> n_array;

    cin >> n >> m;

    for(ll i = 0; i < n; i++){
        cin >> aux;
        array.push_back(aux);
    }

    for(ll i = 0; i < m; i++){
        cin >> aux;
        range.push_back(aux);
    }
    
    vector<ll> consult(n);

    for(ll i = n-1; i >= 0; i--){
        n_array.insert(array[i]);
        consult[i] = n_array.size();
    }
    
    for(auto& item : range)
        cout << consult[item-1] << endl;

    return 0;
}