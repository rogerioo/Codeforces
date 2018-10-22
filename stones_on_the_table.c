#include <stdio.h>

int main(int argc, char const *argv[]) {
  char stones[51];
  int i, count=0;

  scanf("%d %s", &i, stones);

  for (i = 1;stones[i] != 0; i++) {
    if (stones[i-1] == stones[i]) {
      count++;
    }
  }

  printf("%d\n", count);

  return 0;
}
