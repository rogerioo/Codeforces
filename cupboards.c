#include <stdio.h>

#define MIN(x,y) ((x < y) ? x : y)

int main(int argc, char const *argv[]) {
  int cupboards, left, right, i;
  int lf_closed=0, lf_opened=0, rt_closed=0, rt_opened=0, seconds=0;

  scanf("%d", &cupboards);
  for (i = 0; i < cupboards; i++) {
    scanf("%d %d", &left, &right);

    left ? lf_closed++ : lf_opened++;
    right ? rt_closed++ : rt_opened++;
  }
  seconds = MIN(lf_closed, lf_opened) + MIN(rt_closed, rt_opened);

  printf("%d\n", seconds);

  return 0;
}
