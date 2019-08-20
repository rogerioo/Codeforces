#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, pair<ll,ll>>;

int main(int argc, char const *argv[])
{
    priority_queue<ii, vector<ii>, greater<ii>> registries;
    ll qtd, qnumber, period;
    string option;

    cin >> option;

    while(option != "#"){
        cin >> qnumber >> period;

        registries.push(make_pair(period, make_pair(qnumber,period)));

        cin >> option;
    }

    cin >> qtd;

    while (qtd--)
    {
        auto element = registries.top();
        registries.pop();

        cout << element.second.first << endl;

        registries.push(make_pair(element.first + element.second.second, element.second));
    }

    return 0;
}