#include <stdio.h>

int main(int argc, char const *argv[]) {
  int stops, in, out, aux, capacity=-32768, i;

  scanf("%d %d %d", &stops, &aux, &aux); //Trowing out the first out and getting the first in

  for(i=1; i < stops;i++){
    if(capacity < aux)
      capacity = aux;

    scanf("%d %d", &out, &in);

    aux -= out;
    aux += in;
  }

  printf("%d\n", capacity);

  return 0;
}
