#include <stdio.h>

int main(int argc, char const *argv[]) {
  char word[1001];
  int i;

  scanf("%s", word);

  printf("%c", word[0] <= 90 ? word[0] : word[0] - 32);
  printf("%s\n", word+1);

  return 0;
}
