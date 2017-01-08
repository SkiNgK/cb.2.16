#include <stdio.h>
#include <locale.h>

long int somaFibo(long int l[], long int t){
	int s = 0,i;

	for(i = 0; i <= t; i++){
		s += l[i];
	}

	return s;
} 

void printFibo(long int l[], long int t){
	int i;

	for (i = 0; i <= t; ++i){
		printf("[%d] = [%ld]\n", i, l[i]);
	}
}

int main(){
	long int fibolist[10], soma;

	fibolist[0]=0;
	fibolist[1]=1;

	for (int i = 2; i <= 10; ++i){
		fibolist[i] = fibolist[i - 1] + fibolist [i - 2];
	}

	soma = somaFibo(fibolist, 10);
	printFibo(fibolist, 10);
	printf("\n%ld\n", soma);

	return 0;
}