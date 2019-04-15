#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    string number;

    cin >> number;

    ll size = number.size();

    for(ll i = 0; i < size;){
        if((size-1)-i >= 2 && number[i] == '1' && number[i+1] == '4' && number[i+2] == '4')
            i+=3;

        else if((size-1)-i >= 1 && number[i] == '1' && number[i+1] == '4')
            i+=2;

        else if(number[i] == '1')
            i++;

        else{
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
