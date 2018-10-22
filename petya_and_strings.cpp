#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  string first, second;
  int tt_first=0, tt_second=0, i;

  cin >> first >> second;

  for(i=0;i<first.size();i++){
    if(first[i] > 90)
      first[i] -= 32;
    if(second[i] > 90)
      second[i] -= 32;

    if(first[i] < second[i]){
      printf("-1\n");
      return 0;
    }
    else if(first[i] > second[i]){
      printf("1\n");
      return 0;
    }
  }

  printf("0\n");

  return 0;
}
