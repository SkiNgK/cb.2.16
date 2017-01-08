#include <stdio.h>

void troca(int *array, int i, int j) {
   	int a;
   	a = array[i];
    array[i] = array[j];
    array[j] = a;
}

int main(void) {
    int L[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    int i, j;
    scanf("%d %d", &i, &j);
    troca(L, i, j);

    // Imprime elementos
    for (i=0; i<11; i++) {
        printf("%d ", L[i]);
    }
}