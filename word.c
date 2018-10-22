#include <stdio.h>

int main(int argc, char const *argv[]) {
  char word[101];
  int i, lower=0, upper=0;

  scanf("%s", word);

  for(i=0;word[i] != '\0';i++){
    if(word[i] <= 90)
      upper++;
    else
      lower++;
  }

  if (upper > lower){
    for(i=0;word[i] != '\0';i++)
      printf("%c", word[i] <= 90 ? word[i] : word[i] - 32);
  }
  else{
    for(i=0;word[i] != '\0';i++)
      printf("%c", word[i] >= 97 ? word[i] : word[i] + 32);
  }

  printf("\n");

  return 0;
}
