#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    map<string, int> overall;
    int n, max=0;
    string team, result;

    cin >> n;

    while (n--)
    {
        cin >> team;
        overall[team]+=1;
    }

    for(auto& item : overall){
        if (max < item.second){
            max = item.second;
            result = item.first;
        }
    }

    cout << result << endl;
    
    return 0;
}
