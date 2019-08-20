#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;

int main(int argc, char const *argv[])
{
    map<string, ll> system;
    string name;
    ll qtd, id=1;

    cin >> qtd;

    while(qtd--){
        cin >> name;

        auto it = system.find(name);

        if(it == system.end()){
            cout << "OK\n";
            system[name] = id;
        }
        else{
            name.append(to_string((*it).second));
            cout << name << "\n";

            (*it).second++;
            system[name] = id;
        }

    }   

    return 0;
}
