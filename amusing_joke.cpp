#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  string guest, host, pile;
  bool theres_host, theres_guest;
  int i, j, aux=0;

  cin >> guest >> host >> pile;


  for(i=0;i<guest.size();i++)
    for(j=0;j<pile.size();j++)
      if(guest[i] == pile[j]){
        pile[j] = '#';
        aux++;
        break;
      }
  theres_guest = (aux == guest.size()) ? true : false;

  aux=0;
  for(i=0;i<host.size();i++)
    for(j=0;j<pile.size();j++)
      if(host[i] == pile[j]){
        pile[j] = '#';
        aux++;
        break;
      }
  theres_host = (aux == host.size()) ? true : false;


  cout << ((pile.find_first_not_of('#') == -1 && theres_host && theres_guest) ? "YES" : "NO"  ) << endl;

  return 0;
}
