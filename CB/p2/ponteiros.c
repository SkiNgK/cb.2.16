#include <stdio.h>
#include <stdlib.h>

int main(){
	int x = 3;
	int *p;

	// p = &x;
	// printf("%d\n", x);
	// printf("%d\n", *p);
	p = (int *) malloc(sizeof(int)*x);

	for (int i = 0; i < 3; i++){
		printf("[%d]: ", i);
		scanf("%d", &p[i]);
	}

	for (int j = 0; j < 3; j++){
		printf("[%d] - %d\n", j, p[j]);
	}

	free(p);
	// printf("%d\n", x);
	// printf("%d\n", *p);

	// *p = sizeof(int);

	// printf("%d\n", *p);
	// printf("%d\n", x);


	return 0;
}