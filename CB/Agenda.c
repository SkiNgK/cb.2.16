#include <stdio.h>
#include <locale.h>

int main(){
	char nome[20], email[20], telefone[8];
	int idade, quatidade, i;
	setlocale(LC_ALL, "Portuguese");
	FILE* arq;

	arq = fopen("agenda.txt", "a");

	printf("--AGENDA--\n\n");
	printf("Digite quantos contatos deseja inserir: ");
	scanf("%d", &quatidade);

	for (i = 1; i <= quatidade; ++i){
		printf("\n%dª Contato: \n\n", i);
		printf("Nome: ");
		scanf("%s", nome);
		printf("Idade: ");
		scanf("%d", &idade);
		printf("Telefone: ");
		scanf("%s", telefone);
		printf("E-mail: ");
		scanf("%s", email);
	}

	for (i = 1; i <= quatidade; ++i){
		printf("-----------------------\n");
		printf("%dª Contato: \n\n", i);
		printf("Nome: %s", nome);
		printf("\nIdade: %d", idade);
		printf("\nTelefone: %s", telefone);
		printf("\nE-mail: %s\n", email);

		// fprintf(arq, "-----------------------\n");
		// fprintf(arq, "%dª Contato: \n\n", i);
		// fprintf(arq, "Nome: %s", nome);
		// fprintf(arq, "\nIdade: %d", idade);
		// fprintf(arq, "\nTelefone: %s", telefone);
		// fprintf(arq, "\nE-mail: %s\n", email);
	}

	fclose(arq);
	return 0;
}