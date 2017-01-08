#include <stdio.h>

int main() {
    FILE *arq ;
    char frase[100] ;

    arq = fopen("loopnome.txt", "r") ;

    while(fgets(frase, 100, arq) != NULL) {
        printf("%s", frase) ;
    }

    fclose(arq) ;
    return 0 ;
}