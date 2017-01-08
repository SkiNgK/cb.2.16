#include <stdlib.h>
#include <stdio.h>

int main()
{
	float quadrado, quantidade;

	printf("n: ");
	scanf("%f", &quantidade);

	for (int i = 1; i <= quantidade; i++)
	 {
	 	quadrado = i*i;

	 	printf("%.f\n", quadrado);
	 } 

	return 0;
}