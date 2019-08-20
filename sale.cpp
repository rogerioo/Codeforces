#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, aux, earn=0;
    vector<int> price;

    cin >> n >> m;

    while(n--){
        cin >> aux;

        if (aux < 0)
            price.push_back(aux);
    }

    sort(price.begin(), price.end());

    for (size_t i = 0; i < price.size() and i < m; i++)
        earn += abs(price[i]);
    

    cout << earn << endl;

    return 0;
}