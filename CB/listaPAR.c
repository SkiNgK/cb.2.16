#include <stdio.h>
#include <locale.h>

int main(){
	int i = 0,n;

	printf("N: ");
	scanf("%d", &n);

	printf("\n");

	while(i < n){
		i++;
		if (i%2==0 && i%10!=0){
			printf("%d\n", i);
		}
	}

	return 0;
}
