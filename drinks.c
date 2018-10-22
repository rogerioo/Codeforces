#include <stdio.h>

int main(int argc, char const *argv[]) {
  int drinks, franctions, i;
  double total, volume = 0;

  scanf("%d", &drinks);

  for (i = 0; i < drinks; i++) {
    scanf("%d", &franctions);
    volume += franctions;
  }

  total = volume / drinks;

  printf("%.12lf\n", total);

  return 0;
}
