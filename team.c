#include <stdio.h>

int main(int argc, char const *argv[]) {
  int problems, solvable=0, x, y, z, i;

  scanf("%d", &problems);

  for(i=0;i<problems;i++){
      scanf("%d %d %d", &x, &y, &z);

      if((x+y+z) > 1)
        solvable++;
  }

  printf("%d\n", solvable);

  return 0;
}
