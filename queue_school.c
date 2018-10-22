#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  char * queue;
  int quantity, seconds, i;

  scanf("%d %d", &quantity, &seconds);

  queue = (char *) malloc( (quantity + 1) * sizeof(char));

  scanf("%s", queue);

  while (seconds--) {
    for (i = 0; i < quantity; i++){
      if (queue[i] == 'B' && queue[i+1] == 'G'){
        queue[i] = 'G';
        queue[++i] = 'B';
      }
    }
  }

  printf("%s\n", queue);

  return 0;
}
