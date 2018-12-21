#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  long long int number, aux, count1=1, count2, count3, a, b, c;
  vector<long long int> fib {0,1};

  cin >> number;

  while (1){
    aux = fib[count1-1]+fib[count1++];
    if (aux >= number)
      break;
    fib.push_back(aux);
  }

  for (count1 = 0; count1 < fib.size(); count1++)
    for (count2 = 0; count2 < fib.size(); count2++)
      for (count3 = 0; count3 < fib.size(); count3++)
        if ( (fib[count1]+fib[count2]+fib[count3]) == number){
          cout << fib[count1] << ' ' << fib[count2] << ' ' << fib[count3] << endl;
          return 0;
        }

  cout <<  "I'm too stupid to solve this problem"  << endl;

  return 0;
}
