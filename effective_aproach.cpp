#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  long long n, m, Vasya=0, Petya=0, aux, i, j;
  long long a[100000], b[100000], c[100000];

  cin >> n;

  for(i=0;i<n;i++){
    cin >> a[i];
    c[a[i]] = i; //Keeping the position of the element on array c
  }

  cin >> m;

  for(i=0;i<m;i++){
    cin >> b[i];
  }

  for(i=0;i<m;i++)
    Vasya += c[b[i]] + 1; //Accessing the position of element b

  for(i=0;i<m;i++)
    Petya += n - c[b[i]]; //Accessing the position of element b

  cout << Vasya << ' ' << Petya << endl;

  return 0;
}
