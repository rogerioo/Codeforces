#include <iostream>

using namespace std;

int main() {
  long long int number;
  int count=0;

  cin >> number;

  while(number){
    if(number%10 == 4 || number%10 == 7)
      count++;

    number/=10;
  }

  if (count == 4 || count == 7)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
