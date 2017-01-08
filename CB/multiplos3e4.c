#include <stdio.h>

int main(){
	
	int i, quantidade, somatorio = 0;

	printf("n: ");
	scanf("%d", &quantidade);

	for (i = 3; i <= quantidade; ++i){
		if (i%3 == 0){
			// printf("%d\n", i);
			somatorio += i;
		} else{
			if (i%4 == 0){
				// printf("%d\n", i);
				somatorio += i;
			}
		}
	}

	printf("%d\n", somatorio);

	return 0;
}