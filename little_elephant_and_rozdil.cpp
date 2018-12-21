#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  long long int towns, travel_time, smaller=numeric_limits<long long int>::max(), city, i;
  bool teste;

  cin >> towns;

  for (i = 1; i <= towns; i++) {
    cin >> travel_time;

    if (travel_time == smaller)
      teste = true;

    else if (travel_time < smaller){
      smaller = travel_time;
      city = i;
      teste = false;
    }
  }

  if (teste)
    cout << "Still Rozdil"  << endl;
  else
    cout << city << endl;

  return 0;
}
