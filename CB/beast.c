#include <stdio.h>

int besta(char *nome){
	return 42;
}

int main(){
	char nome[200];

	printf("nome:\n");
	scanf("%[^\n]");
	printf("n: %d\n", besta(nome));
	return 0;
}