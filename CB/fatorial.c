#include <stdlib.h>
#include <stdio.h>

int main()
{
	long long int fatorial = 1, numero = 0;

	printf("n: ");
	scanf("%lld", &numero);

	for (int i = 1; i <= numero; i++)
	 {
	 	fatorial *= i;
	 } 

	 printf("fat: %lld\n", fatorial);
	 
	return 0;
}