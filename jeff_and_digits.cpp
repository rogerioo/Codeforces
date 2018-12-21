#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  long long int digits, fives, zeros, fives_qtd, aux;

  fives = zeros = 0;

  cin >> digits;

  while(digits--){
    cin >> aux;
    fives += (aux == 5);
    zeros += (aux == 0);
  }

  fives_qtd = fives/9;

  if (!zeros){
    cout << "-1" << endl;
    return 0;
  }

  if (fives < 9){
    cout << "0" << endl;
    return 0;
  }

  while (fives_qtd--)
    cout << "555555555";

  while (zeros--)
    cout << "0";

  cout << endl;

  return 0;
}
