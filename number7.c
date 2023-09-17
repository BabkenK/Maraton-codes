#include <stdio.h>

int main()
{
	double x;
	double  result;

	printf("Enter x number: ");
	scanf("%lf", &x);

	result = x/ (5+2) + 30 * x - 51;
	printf ("Result would be : %lf \n", result );

	return 0;
}
