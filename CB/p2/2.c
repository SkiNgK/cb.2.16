#include <stdio.h>

int ping(int n){
	if (n <= 1){
		return 1;
	} 
	if (n%2==0){
		return pong(n/2);
	}
	if (n%2!=0){
		return pong(n+1);
	}
}

int pong(int n){
	if (n<=1){
		return 1;
	} else {
		return n*ping(n-2);
	}
}

int main(){
	int n;

	printf("n: ");
	scanf("%d", &n);

	printf("ping: %d\n", ping(n));
	printf("pong: %d\n", pong(n));

	return 0;
}