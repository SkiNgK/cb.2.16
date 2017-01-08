#include <stdio.h>


int num(int i) {
	int x = (231 * i + 43) % 100;
	// printf("%d\n", x);
    return x; 
}

int main() {
    int N, soma=0;
    printf("n: ");
    scanf("%d", &N);

    // Calcule num(1) + num(2) + ... + num(N) e salve na variável soma.
    for (int i=1; i<=N; i++){
    	soma += num(i);

    }

    printf("soma: %d\n", soma);

return 0;
}