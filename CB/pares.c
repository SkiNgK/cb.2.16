#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, par, i = 0;

	printf("n: ");
	scanf("%d", &n);

	printf("valores: ");
	while(i<=(n*2)+2){
		if (i%2 == 0 && i%10 != 0){
			printf(" %d", i);
		} 
		i++;
	}
	printf("\n");

	return 0;
}

// int main(){
// 	int num,cont,par=0;
// 	for(cont=1; cont<=10; cont++)
// 	{
// 		printf("%d- Informe um numero:\t",cont);
// 		scanf("%d",&num);
// 		if(num%2) par+= 1;
// 	}
// 	printf("\nA quantidade de numeros pares e :%d\n",par);
// 	system("pause >nul");
// 	return 0;
// }