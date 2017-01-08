#include <stdio.h>

int leia_numero(int x, int y){
	if (x < 5){
		return 10;
	} if (x%2 == 0){
		y = (x * x) + leia_numero(x/2,y);
		return y;
	} else {
		y = x + 1;
		return (x * x) + leia_numero(y/2,y);
	}
}

int main(){
	int x, y=0;

	printf("n: ");
	scanf("%d", &x);

	y = leia_numero(x,y);
	printf("f(%d): %d\n", x, y);

	return 0;
}