#include <stdio.h>
#include <string.h>

#define MAX 200

int main(int argc, char const *argv[]) {
  char code[MAX];
  int size, i;

  scanf("%s", code);

  size = strlen(code);

  for(i = 0; i < size; i++){
    if (code[i] == '.')
      printf("0");
    else if (code[i+1] == '.'){
      printf("1");
      i++;
    }
    else{
      printf("2");
      i++;
    }
  }

  printf("\n");

  return 0;
}
