#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char *bra = "brasil";
    char *arg = "argentina";
    char *chi = "chile";
    char *uru = "uruguai";
    char a[20], b[20];
    int comparaA, comparaB, i;

    printf("pais: ");
    scanf("%s", a);

    for(i = 0; a[i]; i++){
        a[i] = tolower(a[i]);
    }

    comparaA = strcmp(a,bra);
    if (comparaA == 0){
        printf("Pais do futebol\n");
    } else {
        comparaA = strcmp(a,arg);
        if (comparaA == 0){
            printf("Pais do churrasco\n");
        } else {
            comparaA = strcmp(a,uru);
            if (comparaA == 0){
                printf("Pais do chimarrao\n");
            } else {
                comparaA = strcmp(a,chi);
                if (comparaA == 0){
                printf("Pais comprido\n");
                } else{
                    printf("Digite um pais valido!\n"); 
                    printf("pais: ");
                    scanf("%s", b);
                    comparaB = strcmp(b,bra);
                    if (comparaB == 0){
                        printf("Pais do futebol\n");
                    } 
                }
            }
        }
    }
    return 0;
}