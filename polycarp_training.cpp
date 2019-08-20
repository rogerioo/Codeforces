#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    vector<ll> contests;
    ll aux, qtd=0;

    cin >> qtd;

    while(qtd--){
        cin >> aux;
        contests.push_back(aux);
    }

    sort(contests.begin(), contests.end());

    qtd = 0;
    for(ll i = 0; i < contests.size(); i++)
        if (contests[i] >= (qtd+1) )
            qtd++;

    cout << qtd << endl;

    return 0;
}
