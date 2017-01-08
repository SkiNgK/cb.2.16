#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convert(char a[20]){
    int i;
    for(i = 0; a[i]; i++){
        a[i] = tolower(a[i]);
    }
}

int main()
{
    char *bra = "brasil";
    // char *arg = "argentina";
    // char *chi = "chile";
    // char *uru = "uruguai";
    char a[20];
    int comparaA, i;

    printf("pais: ");
    scanf("%s", a);

    convert(a);

    comparaA = strcmp(a,bra);

    if(comparaA != 0){

        printf("Digite um pais valido!\n");
        printf("pais: ");
        scanf("%s", a);
        convert(a);
        comparaA = strcmp(a,bra);
        if (comparaA == 0){
            printf("Pais do futebol\n");
        }   
    }

    return 0;
}