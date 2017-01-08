#include <stdio.h>
#include <stdlib.h>

int main(void){
	char nome[20], email[20], c;
	int idade, i=0;

	printf("nome: ");
	scanf("%s", nome);

	printf("idade: ");
	scanf("%d", &idade);

	fflush(stdin);
	getchar();
	printf("e-mail: ");
	// scanf("%s", email);
	while(c != '\n'){
		c = getchar();
		if (c != '\n'){
			email[i] = c;
			i++;
		}
	}

	printf("%s, seu cadastro foi realizado com sucesso!\n", nome);
	printf("Um e-mail foi enviado para %s.\n", email);
	return 0;
}