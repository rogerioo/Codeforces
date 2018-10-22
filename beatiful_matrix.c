#include <stdio.h>
#include <stdlib.h>

int main (){
  int mtx, i, j, total = 0;
  int row, column;

  for (i = 0; i < 5; i++){
    for (j = 0; j < 5; j++){
      scanf("%d", &mtx);
      if (mtx == 1){
          row = i;
          column = j;
      }
    }
  }

  total = abs(2 - row) + abs(2 - column);

  printf("%d\n", total);

  return 0;
}
