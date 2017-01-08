#include <stdio.h>
#include <stdlib.h>

int main(){
	int idades[10];
	double alturas[10];
	int N;
	FILE* file = fopen("arquivo.txt", "r");


	printf("N: ");
	fscanf(file, "%d", &N);

	for (int i=0; i < N; i++){
		fscanf(file, "%d", &idades[i]);
		fscanf(file, "%lf", &alturas[i]);
	}
	fclose(file);

	for (int i=0; i < N; i++){
		fprintf(file, "%d", &idades[i]);
		fprintf(file, "%lf", &alturas[i]);
	}
	fclose(file);	


	double altura_total = 0;
	double idade_total = 0;

	for (int i = 0; i < N; i++){
		altura_total += alturas[i];
		idade_total += idades[i];
	}

	printf("idade: %lf", idade_total);
	printf("altura: %lf\n", altura_total);

	return 0;
}		