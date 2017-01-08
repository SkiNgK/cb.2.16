#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a, b, c;

	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);

	if (a>b && a>c){
		printf("%d\n", a);
	} else {
		if (b>c){
			printf("%d\n", b);
		}else{
			printf("%d\n", c);
		}
	}
	return 0;
}