#include <stdio.h>

int main(int argc, char const *argv[]) {
  int s1, s2, s3, s4, buy=0;

  scanf("%d %d %d %d", &s1, &s2, &s3, &s4);

  if (s1==s2)
    buy++;
  else if (s1==s3)
    buy++;
  else if (s1==s3)
    buy++;
  else if (s1==s4)
    buy++;
  if (s2==s3)
    buy++;
  else if (s2==s4)
    buy++;
  if (s3==s4)
    buy++;

  printf("%d\n", buy);

  return 0;
}
