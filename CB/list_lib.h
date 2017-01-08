void print_lista(long long int l[], long long int size){
    int i;
    FILE* arq = fopen("fibonacci.txt", "w");

    for (i = 0; i <= size; ++i){
        printf("%lld\n", l[i]);
        fprintf(arq, "%lld\n", l[i]);
    }

    fclose(arq);
}

long long int soma_lista(long long int l[], long long int size){
    int i, soma = 0;
    FILE* arq = fopen("fibonacci.txt", "a");

    for (i = 0; i <= size; ++i){
        soma += l[i];
    }

    fprintf(arq, "soma = %d\n", soma);
    return soma;
    fclose(arq);
}