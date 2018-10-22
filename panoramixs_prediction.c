  #include <stdio.h>

  int main(int argc, char const *argv[]) {
    int prime, next, i, j, count=0;

    scanf("%d %d", &prime, &next);

    for (i = prime+1; i <= 50 ; i++) {
      for (j=2;j<i;j++){
        if(i%j == 0)
          count++;
      }

      if (count == 0) {
        if (i == next){
          printf("YES\n");
          return 0;
        }
        else{
          printf("NO\n");
          return 0;
        }
      }

      count = 0;
    }

    if (count == 0) {
      printf("NO\n");
    }

    return 0;
  }
