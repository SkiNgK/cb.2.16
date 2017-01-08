#include <stdio.h>
#include "list_lib.h"

int main(){

	int i;
	long long int lista[10];
	FILE* arq = fopen("fibonacci.txt", "w");

	printf("\n--fibonacci--\n");

	lista[0] = 0;
	lista[1] = 1;

	for (i = 2; i <=10; i++) {
		lista[i] = lista[i - 1] + lista[i - 2];
	}

	print_lista(lista,10);
	long long int S = soma_lista(lista, 10);
	printf("\n%lld\n", S);

	return 0;
}