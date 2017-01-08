#include <stdio.h>

int leia_numero(int x, int y){
	if (x<5){
		y = 10;
	} if (x%2 == 0){
		y = x/2;
		y = (x * x) + y;
	} else {
		y = x +1;
		y = (x * x) + (y / 2); 
	}
}

int main(){;
	int x, y=0;

	printf("n: ");
	scanf("%d", &x);

	x = leia_numero(x,y);
	printf("f(%d): %d\n", x, y);

	return 0;
}