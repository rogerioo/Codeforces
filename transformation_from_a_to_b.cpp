#include<bits/stdc++.h>

using namespace std;

vector<int> adj;
map<int, int> func;


bool bfs(int in, int out){

    queue<int> q;
    int count = 0;

    q.push(in*10+1);
    q.push(in*2);

    adj.push_back(in);
    func[in*10+1] = count++;
    
    adj.push_back(in);
    func[in*2] = count++;

    while(!q.empty()){
        auto v = q.front();
        q.pop();

        if(v < 0 or v > out)
            continue;

        adj.push_back(v);
        func[v*10+1] = count++;
    
        adj.push_back(v);
        func[v*2] = count++;
        
        if(v == out)
            return true;

        q.push(v*10 + 1);
        q.push(v * 2);        
    }

    return false;
}

vector<int> path (int in, int out){
    vector<int> ans;

    auto p = out;
    ans.push_back(out);

    while(p != in){
        p = adj[func.at(p)];
        ans.push_back(p);
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main(int argc, char const *argv[])
{
    int a, b;

    cin >> a >> b;

    if (bfs(a, b)){
        vector<int> ans;

        ans = path(a, b);

        cout << "YES" << endl;

        cout << ans.size() << endl;

        for(const auto& v : ans)
            cout << v << " ";
        cout << endl;
    } 
    else
        cout << "NO" << endl;

    return 0;
}