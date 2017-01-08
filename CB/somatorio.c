#include <stdlib.h>
#include <stdio.h>

int main(){
	int somatorio=0, count, i;

	printf("n: ");
	scanf("%d", &count);

	for (i = 0; i <= count; i++){

		somatorio += i;
	} 

	printf("soma: %d\n", somatorio);
	return 0;
}