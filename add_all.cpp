#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    while (1)
    {
        priority_queue<ll, vector<ll>, greater<ll>>  array;
        ll aux, qtd, sum=0;

        cin >> qtd;

        if (!qtd)
            break;

        while(qtd--){
            cin >> aux;
            array.push(aux);
        }

        while (!array.empty())
        {
            auto a = array.top();
            array.pop();

            auto b = array.top();
            array.pop();

            sum += a + b;

            if (array.empty())
                break;
            
            array.push(a+b);
        }
        
        
        cout << sum << endl;
        
    }
    
    return 0;
}