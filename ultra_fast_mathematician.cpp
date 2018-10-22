#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  string x, y;
  int i;

  cin >> x >> y;

  for(i=0;i<x.size();i++){
    if (x[i] != y[i])
      cout << '1';
    else
      cout << '0';
  }

  cout << endl;

  return 0;
}
