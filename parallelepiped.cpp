#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int area1, area2, area3;
  int x, y, z;

  cin >> area1 >> area2 >> area3;

  /* To get this formulas you should make the relations between the three equations
     -area1 = x * z
    --area2 = y * z
     -area3 = a * y
    It's easyer if you draw a parallelepiped and give the areas a name
  */

  x=sqrt(area3*area2/area1);
  z=area2/x;
  y=area1/z;

  cout << 4 * (x+y+z) << endl;

  return 0;
}
