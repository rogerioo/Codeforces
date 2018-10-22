#include <stdio.h>

int main(int argc, char const *argv[]) {
  int board[5][5];
  int i, j, k, quantity;

  for(i=0;i < 5;i++){
    for(j=0;j < 5; j++){
      board[i][j] = 1;
    }
  }

  for(i=1;i < 4;i++){
    for(j=1;j < 4; j++){
      scanf("%d", &quantity);

      for(k=0;k < quantity;k++){
        board[i-1][j] = !board[i-1][j];
        board[i+1][j] = !board[i+1][j];
        board[i][j-1] = !board[i][j-1];
        board[i][j+1] = !board[i][j+1];
        board[i][j] = !board[i][j];
      }

    }
  }

  for(i=1;i < 4;i++){
    for(j=1;j < 4; j++){
      printf("%d", board[i][j]);
    }
    printf("\n");
  }

  return 0;
}
