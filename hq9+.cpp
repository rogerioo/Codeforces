#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  string program;

  cin >> program;

  if (program.find('H') != -1 || program.find('Q') != -1 || program.find('9') != -1)
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}
