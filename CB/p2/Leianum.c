#include <stdio.h>

int main(){
	char msg[10];
	int valida = 0, i = 0;

	printf("n: ");
	scanf("%s", msg);

	while (i <= 10 && msg[i] != 0){
		if (msg[i] <= '0' || msg[i] >= '9'){
			valida += 1; 				
			printf("ERRO  %s  -  %d  -  %d\n", msg, msg[i], i);
		} 
		i++;
	}
	printf("i = %d\n", i);
	if (valida == 0){
		printf("%s - %d\n", msg, msg[i-1]-48+1);
	}
	return 0;
}
