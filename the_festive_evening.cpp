#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    map<char, ll> doors;
    ll k, n;
    string in;

    cin >> k >> n >> in;

    for(auto& character : in){
        auto it = doors.find(character);

        if(it == doors.end()){
            auto occurrences = count(in.begin(), in.end(), character)-1;

            if(occurrences > 0)
                doors[character] = occurrences;
            else if (doors.size()+1 > n){
                cout << "YES" << endl;
                return 0;
            }
        }
        else{
            if(it->second > 0)
                it->second -= 1;
            
            if(it->second == 0)
                doors.erase(it);
        }
        
        if(doors.size() > n){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}