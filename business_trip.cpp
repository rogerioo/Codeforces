#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int k, aux, growth=0;
    vector<int> water;

    cin >> k;

    for (size_t i = 1; i <= 12; i++)
    {
        cin >> aux;

        water.push_back(-aux);
    }

    sort(water.begin(), water.end());

    for (size_t i = 0; i <= 12; i++)
    {
        if (growth < k)
            growth += abs(water[i]);
        else
        {
            cout << i << endl;
            return 0;
        }
        
    }    

    cout << -1 << endl;

    return 0;
}