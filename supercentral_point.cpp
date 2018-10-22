#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  vector<pair<int,int>> points;
  int total=0, n, x, y;
  bool right, left, upper, lower;

  cin >> n;

  for (size_t i = 0; i < n; i++) {
    cin >> x >> y;
    points.push_back(make_pair(x, y));
  }

  for (size_t i = 0; i < n; i++) {
    right = left = upper = lower = false;

    for (size_t j = 0; j < n and (!right or !left or !upper or !lower); j++) {
      if(points[i].first > points[j].first and points[i].second == points[j].second)
        right = true;
      if(points[i].first < points[j].first and points[i].second == points[j].second)
        left = true;
      if(points[i].first == points[j].first and points[i].second < points[j].second)
        upper = true;
      if(points[i].first == points[j].first and points[i].second > points[j].second)
        lower = true;
    }

    if(upper and lower and left and right)
      total++;
  }

  cout << total << endl;

  return 0;
}
