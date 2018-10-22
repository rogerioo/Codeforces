#include <stdio.h>

int main(int argc, char const *argv[]) {
  int friends, fingers=0, dima=0, aux, i;

  scanf("%d", &friends);

  for(i=0;i<friends;i++){
    scanf("%d", &aux);
    fingers += aux;
  }

  for(i=1;i<=5;i++){
    aux = fingers + i;
    if (aux%(friends+1) != 1) //Including Dima
      dima++;
  }

  printf("%d\n", dima);

  return 0;
}
