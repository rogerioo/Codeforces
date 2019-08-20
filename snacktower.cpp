#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;

int main(int argc, char const *argv[])
{
    priority_queue<ll> stack;
    vector<ll> elems;
    ll qtd, aux, ctr;

    cin >> qtd;

    ctr = qtd;

    while(qtd--){
        cin >> aux;
        elems.push_back(aux);
    }

    for(auto& item : elems){
        stack.push(item);

        while (stack.top() == ctr)
        {
            cout << stack.top();
            stack.pop();            
            ctr--;
            
            cout << (stack.top() == ctr ? " " : "");
        }

        cout << endl;  
    }

    return 0;
}