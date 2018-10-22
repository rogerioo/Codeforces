#include <stdio.h>
#include <stdlib.h>

int main(){
	int passengers, planes, * seats, max = 0, min = 0;
	int i, j, aux;

	scanf("%d %d", &passengers, &planes);

	seats = (int *) malloc(sizeof(int) * planes);

	for(i = 0; i < planes; i++){
		scanf("%d", &seats[i]);
	}

	for(i = 0; i < planes; i++){
		for(j = i + 1; j < planes; j++){
			if(seats[j] > seats[i]){
				aux = seats[i];
				seats[i] = seats[j];
				seats[j] = aux;
			}
		}
	}

	int k = 0, tmp = seats[k];

	for(i = 0; i < passengers; i++){
		min += (tmp --);

		if(tmp == 0)
			tmp = seats[++ k];	
	}

	for(i = 0; i < passengers; i++){
		max += seats[0];

		seats[0] -= 1;

		for (k = 1; k < planes; k++){
			if (seats[k - 1] >= seats[k])
				break;

			tmp = seats[k];
			seats[k] = seats[k - 1];
			seats[k-1] = tmp;
		}
	}

	printf("%d %d\n", max, min);
	free(seats);
	return 0;
}
