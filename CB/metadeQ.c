#include <stdio.h>

int main(){
	int n, quadrado = 0, metade = 0;	

	do
	{
		printf("n: ");
		scanf("%d", &n);
	} while (n%2!=0 || n<0);
		metade = n/2;
		quadrado = metade * metade;
		printf("resultado: %d\n", quadrado);

	return 0;
}