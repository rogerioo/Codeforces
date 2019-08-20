#include <bits/stdc++.h>    

using namespace std;

int solve(priority_queue<int, vector<int>, greater<int>> a, priority_queue<int, vector<int>, greater<int>> b){
    int count = 0;

    while(!a.empty() and !b.empty()){
        auto smaller = min(a.top(), b.top());
        auto greater = max(a.top(), b.top());

        if( (greater - smaller) <= 1 ){
            a.pop();
            b.pop();
            count++;
        }
        else
            smaller == a.top()? a.pop() : b.pop();
    }

    return count;
}

int main(int argc, char const *argv[])
{
    priority_queue<int, vector<int>, greater<int>> boys, girls;
    int n, m, aux;

    cin >> n;

    while(n--){
        cin >> aux;
        boys.push(aux);
    }

    cin >> m;

    while(m--){
        cin >> aux;
        girls.push(aux);
    }

    cout << solve(boys, girls) << endl;

    return 0;
}
