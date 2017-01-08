#include <stdio.h>
#include <stdlib.h>

typedef struct Ponto {
    int x;
    int y;
    int z;
} Ponto;

void modifica_ponto(Ponto p) {
    p.x = p.y | p.z;
    p.y = p.z ^ p.x;
    p.z = p.x & p.y;
}

int main(void) {
    Ponto p;
    Ponto *x;

    printf("p: ");
    scanf("%d%d%d", &(p.x), &(p.y), &(p.z));

    x = &p;

    printf("original: %d,%d,%d\n", p.x, p.y, p.z);
    modifica_ponto(p);

    printf("modificado: %d,%d,%d\n", p.x, p.y, p.z);
}