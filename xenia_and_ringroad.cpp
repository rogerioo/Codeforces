#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    ll n, m, task, time=0, house = 1;

    cin >> n >> m;

    while (m--){
        cin >> task;

        if (task >= house)
            time += task - house;
        else
            time += task + (n-house);

        house = task;
    }

    cout << time << endl;

    return 0;
}
