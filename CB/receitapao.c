#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

	float proporcao, farinha, agua, sal, fermento, descansarI, descansarF, assar;
	setlocale(LC_ALL, "Portuguese");
	printf("receitas: ");
	scanf("%f", &proporcao);

	farinha = 500 * proporcao;
	agua = 300 * proporcao;
	sal = 10 * proporcao;
	fermento = 2 * proporcao;

	// descansarI = 4 * proporcao;
	// descansarF = 8 * proporcao;
	// assar = 35 * proporcao; 

	printf("\nIngredientes:\n\n");

	if (proporcao == 0){
		printf("Receita sem ingredientes\n");
	} else {

	printf("* %.1fg de farinha de trigo\n", farinha);
	printf("* %.1fml de água\n", agua);
	printf("* %.1fg de sal\n", sal);;
	printf("* %.1fg de fermento para pão\n", fermento);

	printf("\nInstruções:\n\n");

	printf("* Misture e amasse bem todos os ingredientes.\n");
	printf("* Deixe descansar por 4-8h\n");
	printf("* Asse por 35min em forno quente.\n");

	}

	return 0;
}