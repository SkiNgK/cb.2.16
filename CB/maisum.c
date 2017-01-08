#include <stdio.h>
#include <locale.h>

int main(){
	int n;
	setlocale(LC_ALL, "Portuguese");

	printf("n: ");
	scanf("%d", &n);
	
	if(n>0 || n<0 || n==0){
		// n = n+1;
		printf("%d\n", n+1);
	} else 
	printf("Digite um número!\n");
	
	return 0;
}
