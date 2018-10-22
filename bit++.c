#include <stdio.h>

int main(int argc, char const *argv[]) {
  char operation[4];
  int statements, X=0, i;

  scanf("%d", &statements);

  for(i=0;i<statements;i++){
    scanf("%s", operation);

    if(operation[0] == '+' || operation[1] == '+' || operation[2] == '+')
      X++;
    else if(operation[0] == '-' || operation[1] == '-' || operation[2] == '-')
      X--;
  }

  printf("%d\n", X);

  return 0;
}
