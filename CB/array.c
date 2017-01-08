#include <stdlib.h>
#include <stdio.h>

void print_list(int list[], int size){
	int i;
	printf("[");
	for (i = 0; i < size; i++){
		printf("%d, ",list[i]);
	}
	printf("]");
}

int main(){
	// char nome[200];
	int fibo_list[10];
	int idx;

	fibo_list[0] = 1;
	fibo_list[1] = 1;

	for (idx = 2; idx < 10; idx++){
		fibo_list[idx] = fibo_list[idx - 1] + fibo_list[idx - 2];
	}

	print_list(fibo_list, 10);
	// printf("nome:\n");
	// scanf("%[\n]s", nome);

	// printf("Ola, %s!\n", nome);
	return 0;
}
