#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int permutation_size, i;

  scanf("%d", &permutation_size);

  if (permutation_size%2 != 0) {
    printf("-1\n");
    return 0;
  }

  for (i = 1; i < permutation_size; i+=2)
    printf("%d %d ", i+1, i);

    printf("\n");

  return 0;
}
