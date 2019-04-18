#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    ll n, aux;
    vector<ll> input, first, second;

    cin >> n;

    for(ll i = 0; i < n; i++){
        cin >> aux;
        input.push_back(aux);
    }

    for(ll i = 0; i < (n-1); i++){
        cin >> aux;
        first.push_back(aux);
    }

    for(ll i = 0; i < (n-2); i++){
        cin >> aux;
        second.push_back(aux);
    }

    vector<ll> out(2);

    //Vector must be sorted
    sort(input.begin(), input.end());
    sort(first.begin(), first.end());
    sort(second.begin(), second.end());

    set_difference(input.begin(), input.end(), first.begin(), first.end(), out.begin());
    set_difference(first.begin(), first.end(), second.begin(), second.end(), out.begin()+1);

    for(auto& item : out)
        cout << item << endl;

    return 0;
}