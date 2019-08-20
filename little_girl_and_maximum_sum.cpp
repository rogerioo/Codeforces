#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;

template<typename T>
class BITree {
private:
    vector<T> ts;
    size_t N;

public:
    BITree(size_t n) : ts(n + 1, 0), N(n) {}

    T RSQ(int i, int j)
    {
        return RSQ(j) - RSQ(i - 1);
    }

private:
    int LSB(int n) { return n & (-n); }

    T RSQ(int i)
    {
        T sum = 0;

        while (i >= 1)
        {
            sum += ts[i];
            i -= LSB(i);
        }

        return sum;
    }

public:
    void add(size_t i, const T& x)
    {
        if (i == 0)
            return;

        while (i <= N)
        {
            ts[i] += x;
            i += LSB(i);
        }
    }
};

int main(int argc, char const *argv[])
{
    priority_queue<ll> in;
    vector<ii> query, hist;
    ll qtd, queries,aux,l,r;
    
    cin >> qtd >> queries;

    hist.push_back(make_pair(0,0)); // Insert sentinel

    for (ll i = 1; i <= qtd; i++)
    {
        cin >> aux;
        in.push(aux);

        hist.push_back(make_pair(0,i));
    }

    while (queries--)
    {
        cin >> l >> r;

        hist[l].first++;

        if (r < qtd)
            hist[r+1].first--; // When I make the prefix sum, this wil mark the position where the interval is over and I must stop adding 

        query.push_back(make_pair(l, r));
    }

    ll total = 0; // Prefix sum for the number of times a position is queried
    for (ll i = 1; i <= qtd; i++){
        total += hist[i].first; 
        hist[i].first = total;
    }

    sort(hist.begin(), hist.end(), greater<ii>());

    hist.pop_back(); //Remove sentinel

    vector<ll> elements(qtd+1, 0);

    // Making the reordered array in a way the max element is on the most required position
    for (ll i = 0; i < qtd; i++)
    {
        elements[hist[i].second] = in.top();
        in.pop();
    }

    BITree<ll> sum(qtd);

    for (ll i = 1; i <= qtd; i++)
        sum.add(i, elements[i]);

    ll ans = 0;
    for(ll i = 0; i < query.size(); i++)
        ans += sum.RSQ(query[i].first, query[i].second);

    cout << ans << endl;    

    return 0;
}