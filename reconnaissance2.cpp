#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  vector<int> soldiers;
  int n, aux, difference, minimal=32767, min_index, i, j;

  cin >> n;

  for(i=0 ;i<n ;i++){
    cin >> aux;
    soldiers.push_back(aux);
  }

  for(i = 0; i < n; i++){
    difference = abs(soldiers[i] - soldiers[(i+1)%n]);

    if (minimal > difference){
      minimal = difference;
      min_index = (i+1);
    }
  }

  cout << min_index << ' ' << (min_index%n) + 1 << endl;

  return 0;
}
