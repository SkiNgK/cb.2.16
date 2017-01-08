#include <stdio.h>
#include <locale.h>

double tira_media(float n[], int size){
	float somatorio = 0;
	for (int i = 1; i <= size; ++i){
		somatorio = n[i] + somatorio;
	}
	float media = somatorio/size;
	return media;
}


int main(){
	float nota[3], media;
	char nome[20];
	setlocale(LC_ALL, "Portuguese");
	FILE* arq = fopen("notas.txt", "a");

	printf("digite o nome do aluno: ");
	scanf("%s", nome);

	for (int i = 1; i <= 3; i++){
		printf("Digite a nota da %dª prova: ", i);
		scanf("%f", &nota[i]);
	}

	printf("Nome do alunos: %s\n", nome);
	fprintf(arq, "Nome: %s\n\n", nome);

	for (int j = 1; j <= 3; j++){
		fprintf(arq, "%dª nota: %.2f\n",j, nota[j]);
	}

	media = tira_media(nota,3);

	printf("\nMédia: %.2f\n", media);
	fprintf(arq, "\nMédia do aluno:%.2f\n\n----------\n", media);

	if (media >= 5){
		printf("\nAluno passou na matéria :)\n");
	} else {
		printf("\nAluno reprovou na matéria :(\n");
	}

	return 0;
}