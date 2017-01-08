#include <stdio.h>
#include <locale.h>

int main(){
	long int fibolist[10], n1, n2;
	int i, j;
	setlocale(LC_ALL, "Portuguese");

	fibolist[0] = 0;
	fibolist[1] = 1;

	for (i = 2; i <= 10; i++){
		fibolist[i] = fibolist[i - 1] + fibolist [i - 2];
	}

	for (j = 0; j <= 10; j++){
		printf("elemento[%d] = %ld\n", j, fibolist[j]);
	}

	printf("n1: ");
	scanf("%ld", &n1);

	while(n1>10){
		printf("seleção inválida!\n");
		printf("digite 'n' novamente: ");
		scanf("%ld", &n1);
	}

	printf("n2: ");
	scanf("%ld", &n2);

	while(n2>10){
		printf("seleção inválida!\n");
		printf("digite 'n' novamente: ");
		scanf("%ld", &n2);
	}

	printf("\nnúmero1: %ld\n",fibolist[n1]);
	printf("número2: %ld\n",fibolist[n2]);

	long int soma = fibolist[n1] + fibolist[n2];

	printf("%ld + %ld: %ld\n", fibolist[n1], fibolist[n2], soma);

	return 0;
}