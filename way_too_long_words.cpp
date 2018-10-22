#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int quantity, i;
  string word;

  cin >> quantity;

  for(i=0; i < quantity; i++){
    cin >> word;
    if (word.size() > 10)
      cout << word[0] << word.size()-2 << word[word.size()-1] << endl;
    else
      cout << word << endl;
  }

  return 0;
}
