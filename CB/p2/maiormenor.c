#include <stdio.h>
#include <stdlib.h>

void novo(long int* L, long int seed) {
    long int i;
    srand(seed);
    for (i=0; i<=10; i++) {
        L[i] = rand() % 1001;
        // printf("n[%ld]: %ld\n",i, L[i]);
    }
}

int main(void) {
    long int i, maior = 0, menor = 1001, L[10];
    printf("semente: "); 
    scanf("%ld", &i);
    novo(L, i);

    for (i = 0; i <=10; i++){
        if (L[i] < menor){
         menor = L[i];   
        }
        if (L[i] > maior){
         maior = L[i];   
        }
    }
    // printf("%ld\n", menor);

    printf("intervalo: %ld, %ld\n", menor, maior); 
}