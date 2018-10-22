#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int pages, days[7];

  cin >> pages;

  for (size_t i = 0; i < 7; i++) {
    cin >> days[i];
  }

  while (pages > 0) {
    for (size_t i = 0; i < 7; i++) {
      pages -= days[i];

      if (pages <= 0){
        cout << i+1 << endl;
        return 0;
      }
    }
  }
}
