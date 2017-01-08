#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	double p1[4], p2[4], totalP1 = 0, totalP2 = 0;
	setlocale(LC_ALL, "Portuguese");
	FILE* arq;

	// arq = fopen("WRnota.txt", "a");

	// printf("p1: ");
	// scanf("%d", &p1);

	// printf("p2: ");
	// scanf("%d", &p2);

	// printf("%d | %d\n", p1, p2);
	// fprintf(arq, "%d | %d\n", p1, p2);

	// fclose(arq);

	arq = fopen("WRnota.txt", "r");

	for (int i = 1; i <= 4; i++){
		fscanf(arq, "%lf", &p1[i]);
		fscanf(arq, "%lf", &p2[i]);
		printf("%.2lf %.2lf\n", p1[i], p2[i]);
		totalP1 += p1[i];
		totalP2 += p2[i];
	}

	printf("%.2lf\n", totalP1/4);
	printf("%.2lf\n", totalP2/4);

	fclose(arq);
	return 0;
}