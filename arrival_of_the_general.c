#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int line, bigger=-32768, biggerID, smaller=32767, smallerID, i, n, seconds;

  scanf("%d", &n);

  for(i=0; i < n;i++){
    scanf("%d", &line);

    if(bigger < line){
      bigger = line;
      biggerID = i+1;
    }
    if(smaller >= line){
      smaller = line;
      smallerID = i+1;
    }
  }

  seconds = (biggerID-1) + (n - smallerID);

  if (biggerID > smallerID) //When this happens the swap between them are double counted
    seconds--;

  printf("%d\n", seconds);

  return 0;
}
