#include <stdlib.h>
#include <stdio.h>

int main()
{
	double a, b;

	printf("a: ");
	scanf("%lf", &a);
	printf("b: ");
	scanf("%lf", &b);

	if (a>b)
	{
		printf("%.3lf\n", a);
	}else
		printf("%.3lf\n", b);

	return 0;
}