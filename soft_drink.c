#include <stdio.h>

#define MIN(a, b) ((a < b) ? a : b)

int main(int argc, char const *argv[]) {
  int friends, bottles, bottle_quantity, limes, limes_slices, salt;
  int minimum_drink, minimum_salt, toasts;

  scanf("%d %d %d %d ", &friends, &bottles, &bottle_quantity, &limes);
  scanf("%d %d %d %d", &limes_slices, &salt, &minimum_drink, &minimum_salt);

  toasts = MIN(MIN( ((bottles * bottle_quantity)/minimum_drink), (limes * limes_slices)) , (salt/minimum_salt)) / friends;


  printf("%d\n", toasts);


  return 0;
}
