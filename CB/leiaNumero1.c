#include <stdio.h> 

double leia_numero(char *msg) { 
    int i =0; double num = 0; 
    // printf("%c - %d - %s\n", msg[i], msg[i], msg); 
    while(msg[i]!=0 && msg[i] > '0' && msg[i] < '9'){ 
        num = num*10; num = num + msg[i] - 48; i++; 
    } 
    if ((msg[i] < '0' || msg[i] > '9') && msg[i]!=0){ 
        // printf("Digite um número!\n"); 
        return num = -1; 
    } 
    if (num > 100 || num < 0){
    	return num = -2;
    }
    return num; 
} 
int main(void) { 
    double n; 
    char v[20]; 
    printf("n: "); 
    fflush(stdin);
    scanf("%s", v); 
    n = leia_numero(v); 
    while(n == -1){ 
    	fflush(stdin);
        printf("Digite um número!\n"); 
        printf("n: "); scanf("%s", v); 
        n = leia_numero(v); 
    }

    while(n == -2){ 
    	fflush(stdin);
        printf("Escolha um número entre 0 e 100!\n"); 
        printf("n: "); 
        scanf("%s", v); 
        n = leia_numero(v); 
    } 

    if (n != -1){ 
        printf("%.3f\n", n + 1);  
    } 
}