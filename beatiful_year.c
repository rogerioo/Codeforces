#include <stdio.h>

int main(int argc, char const *argv[]) {
  int num;
  int i;

  scanf("%d", &num);

  for(i= ++num; i <= 10000; i++){
    if ( (i%10 != i/10%10) && (i % 10 != i/100%10) && (i%10 != i/1000)
        && (i/10%10 != i/100%10) && (i/10%10 != i/1000) && (i/100%10 != i/1000)){

      printf("%d\n", i);
      break;
    }

  }

  return 0;
}
