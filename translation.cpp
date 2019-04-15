#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string berlandish, birlandish;
    
    cin >> berlandish >> birlandish;

    reverse(birlandish.begin(), birlandish.end());
    
    cout << (berlandish == birlandish ? "YES" : "NO") << endl;

    return 0;
}
