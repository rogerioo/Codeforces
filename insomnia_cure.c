#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, frying_pan, tail_shut, paws_trampled, mommy, dragons, damaged=0;

  scanf("%d %d %d %d %d", &frying_pan, &tail_shut, &paws_trampled, &mommy, &dragons);

  for(i=1;i<=dragons;i++)
    if (i%frying_pan == 0 || i%tail_shut == 0 || i%paws_trampled == 0 || i%mommy == 0)
      damaged++;

  printf("%d\n", damaged);

  return 0;
}
