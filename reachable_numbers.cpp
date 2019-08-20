#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    ll number, aux, cont=0, size;
    set<ll> found;

    cin >> number;

    aux =  number;
    found.insert(number);
    size = found.size();

    while(1){
        aux+=1;

        while(aux%10 == 0)
            aux=aux/10;
        
        found.insert(aux);

        if(size < found.size()){
            cont++;
            size = found.size();
        }
        else
            break;

    }

    cout << found.size() << endl;    

    return 0;
}
