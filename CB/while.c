#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	char tentativa[5];
	char *senha = "senha";
	int compara, quantidade = 1;
	setlocale(LC_ALL, "Portuguese");

	printf("senha: ");
	scanf("%s", tentativa);

	compara = strcmp(senha, tentativa);

	while (compara != 0 && quantidade != 3) {
		printf("%dª tentativa: ", quantidade);
		printf("Acesso negado!\n");
		printf("senha: ");
		scanf("%s", tentativa);
		compara = strcmp(senha, tentativa);
		quantidade ++;
	}
	if(quantidade == 3){
		printf("%dª tentativa: ", quantidade);
		printf("ACESSO INVÁLIDO\n");
	} else
	printf("--Senha correta!!--\n");	

	return 0;
}