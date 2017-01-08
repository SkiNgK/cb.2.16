#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
	char *bubassalto = "bubassalto";
	char *pikachu = "pikachu";
	char *gengar = "gengar";
	char *mewtwo = "mewtwo";
	char a[20], b[20];
	int comparaA, comparaB;
	setlocale(LC_ALL, "Portuguese");

	printf("a: ");
	scanf("%s", a);
	printf("b: ");
	scanf("%s", b);

	//compara a e b com bubassalto
	comparaA = strcmp(a,bubassalto);
	comparaB = strcmp(b,bubassalto);
	if (comparaA == 0 || comparaB == 0){
		printf("vencedor: bubassalto\n");
	} else {
		//compara a e b com pikachu e gengar
		comparaA = strcmp(a,pikachu);
		comparaB = strcmp(b,gengar);
		if (comparaA == 0 && comparaB == 0){
			printf("vencedor: pikachu\n");
		} else {
			//compara a e b com pikachu e gengar
			comparaA = strcmp(a,gengar);
			comparaB = strcmp(b,pikachu);
			if (comparaA == 0 && comparaB == 0){
				printf("vencedor: pikachu\n");
			} else {
				comparaA = strcmp(a,gengar);
				comparaB = strcmp(b,mewtwo);
				if (comparaA == 0 && comparaB == 0){
				printf("vencedor: gengar\n");
				} else {
					comparaA = strcmp(a,mewtwo);
					comparaB = strcmp(b,gengar);
					if (comparaA == 0 && comparaB == 0){
						printf("vencedor: gengar\n");
					} else {
						comparaA = strcmp(a,mewtwo);
						comparaB = strcmp(b,pikachu);
						if (comparaA == 0 && comparaB == 0){
							printf("vencedor: mewtwo\n");
						} else {
							comparaA = strcmp(a,pikachu);
							comparaB = strcmp(b,mewtwo);
							if (comparaA == 0 && comparaB ==0){
								printf("vencedor: mewtwo\n");
							} else {
								printf("pokemon não pode competir\n");
							}
						}
					} 
				}
			}
		}
	}
	return 0;
}