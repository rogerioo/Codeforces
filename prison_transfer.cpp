#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;

int main(int argc, char const *argv[])
{
    vector<ll> prisioners;
    priority_queue<ll> stack, empty;
    ll aux, qtd, max, n_pri, cont=0, ans=0;

    cin >> qtd >> max >> n_pri;

    for(ll i = 0; i < qtd; i++)
    {
        cin >> aux;
        prisioners.push_back(aux);
    }

    for(auto& item : prisioners){        
        if(item <= max)
            stack.push(item);
        else
            stack = empty;

        if(stack.size() == n_pri){
            ans ++;
            stack.pop();
        }
    }

    cout << ans << endl;
    
    return 0;
}