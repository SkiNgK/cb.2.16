#include <stdio.h>
#include <locale.h>
#include "operacao.h"

int main(){
	float a ,b, result=0;
	setlocale(LC_ALL, "Portuguese");

	printf("Digite um número: ");
	scanf("%f", &a);

	printf("Digite outro número: ");
	scanf("%f", &b);

	// printf("Digite a operação: ");
	// scanf("%c", &op);
	calcula(a,b);
	return 0;
}