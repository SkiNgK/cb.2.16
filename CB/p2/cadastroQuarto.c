#include <stdio.h>

typedef struct Quarto{
	char categoria;
	float preco;
}Quarto;

int main(){
	Quarto quarto;

	quarto.categoria = 'a';
	quarto.preco  = 55.00;

	printf("Categoria: %c\n", quarto.categoria);
	printf("Preco: %.2f\n", quarto.preco);

	return 0;
}