#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  string user_name;
  int i, j, distinct_characters;

  cin >> user_name;
  distinct_characters = user_name.size();

  for(i=0;i<user_name.size();i++)
    for(j=i+1;j<user_name.size();j++)
      if(user_name[i]==user_name[j]){
        distinct_characters--;
        user_name[j] = -j;
      }

  cout << (((distinct_characters%2) == 0) ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;

  return 0;
}
