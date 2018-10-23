#include <bits/stdc++.h>

using namespace std;

bool compare(const int& a, const int& b){
  int x= a % 2, y = b % 2;

   return x == y ? a < b : x > y;
}

int main(int argc, char const *argv[]) {
  vector<long long int> numbers;
  long long int n, k, i;

  cin >> n >> k;

  for (i = 1; i <= n; i++)
    numbers.push_back(i);

  partial_sort(numbers.begin(), numbers.begin() + k, numbers.begin()+n, compare);

  cout << numbers[--k] << endl;

  return 0;
}
