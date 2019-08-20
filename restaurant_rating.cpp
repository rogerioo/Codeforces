#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    priority_queue<ll> low;
    priority_queue<ll, vector<ll>, greater<ll>> high;
    ll qtd, cmd, total = 0;

    cin >> qtd;

    while(qtd--){
        cin >> cmd;

        switch (cmd)
        {
        case 1:
            ll aux;
            cin >> aux;

            low.push(aux);
            total++;

            if(high.size() < total/3){
                high.push(low.top());
                low.pop();
            }

            while(!high.empty() and low.top() > high.top()){
                auto next = low.top();
                auto prev = high.top();
                
                low.pop();
                high.pop();

                low.push(prev);                
                high.push(next);
            }

            break;
        
        default:
            if (!high.empty())
                cout << high.top() << endl;
            else
                cout << "No reviews yet" << endl;
        }
    }

    return 0;
}