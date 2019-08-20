#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);

    map<ll,ll> function;
    string number;
    ll qtd, aux;

    cin >> qtd >> number;

    for (size_t i = 1; i < 10; i++)
    {
        cin >> aux;
        function[i] = aux;
    }

    ll i = number.find_last_of('0')+1;

    for (; i < qtd; i++){
       if (number[i] != '0' and (number[i]-'0') < function[number[i]-'0'])
           number[i] = function[number[i]-'0'] + '0';
    }

    std::cout << number << endl;    
    
    return 0;
}
