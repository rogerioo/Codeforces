#include <stdio.h>

int main(){
	unsigned int in;
	int x, y, z, i;
	int x_res = 0, y_res = 0, z_res = 0;

	scanf("%u", &in);

	for(i = 0; i < in; i++){
	scanf("%d %d %d", &x, &y, &z);

	x_res += x;
	y_res += y;
	z_res += z;
	}

	if (x_res == 0 && y_res == 0 && z_res == 0)
		printf("YES");
	else
		printf("NO");

	return 0;
}
