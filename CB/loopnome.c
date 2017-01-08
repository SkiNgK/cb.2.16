#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	char a[20], b[20];
	int compara;
	setlocale(LC_ALL, "Portuguese");
	FILE* file = fopen("loopnome.txt", "a");

	printf("digite uma palavra: ");
	scanf("%s", a);

	printf("digite outra palavra: ");
	scanf("%s", b);

	compara = strcmp(a,b);

	while(compara != 0){
		printf("As palavras são difetentes\n");
		printf("digite novamente a segunda palavra: ");
		scanf("%s", b);

		compara = strcmp(a,b);
	}

		printf("As palavras são iguais\n");

		fprintf(file, "As palavras '%s' e '%s' são iguais.\n", a, b);
		fclose(file);

	return 0;
}