#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    map<string, string> users;
    string old, young;
    long long n;

    cin >> n;

    while (n--)
    {
        cin >> old >> young;

        auto it = users.find(old);

        if (it == users.end())
            users[young] = old;
        else{
            auto tmp = it->second;
            users.erase(it);
            users[young] = tmp;
        }
    }

    cout << users.size() << endl;

    for(auto& item : users)
        cout << item.second << ' ' << item.first << endl; 
    
    return 0;
}