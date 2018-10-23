#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  long long int n, k, middle;

  cin >> n >> k;

  middle = (n%2) == 0 ? (n/2) : ceil(n/2.0);

  cout << (k <= middle ? (k*2) - 1 : (k-middle) * 2) << endl;

  return 0;
}
