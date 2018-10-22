#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n, m, aux, i=0;
  vector<pair<int, int>> queue;

  cin >> n >> m;

  for (size_t i = 0; i < n; i++) {
    cin >> aux;
    queue.push_back(make_pair(i+1, aux));
  }

  aux=n;
  while (queue.size() != 1) {
    for (size_t i = 0; i < queue.size() && queue.size() != 1; i++) {
      if (queue[i].second > 0)
        queue[i].second -= m;

      if (queue[i].second <= 0){
        queue.erase(queue.begin()+i);
        i--;
      }
    }
  }

  cout << queue[0].first << endl;

  return 0;
}
