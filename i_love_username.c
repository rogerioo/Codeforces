#include <stdio.h>

int main(int argc, char const *argv[]) {
  int total_contests, contest, greater, smaller, amazing=0, i;

  scanf("%d %d", &total_contests, &contest);
  greater=smaller=contest;

  for (i = 1; i < total_contests; i++) {
    scanf("%d", &contest);

    if (greater < contest) {
      greater = contest;
      amazing++;
    }
    if(smaller > contest){
      smaller = contest;
      amazing++;
    }
  }

  printf("%d\n", amazing);

  return 0;
}
