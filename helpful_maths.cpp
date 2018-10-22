#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  string calculation;
  int i, j, base;

  cin >> calculation;

  for(i=2; i < calculation.size(); i+=2){
    base=calculation[i];

    for(j=i; j && calculation[j-2] > base; j-=2)
      calculation[j] = calculation[j-2];

    calculation[j]=base;
  }

  cout << calculation << endl;

  return 0;
}
