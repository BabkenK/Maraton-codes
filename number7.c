#include <stdio.h>

int main()
{
	int x;
	int result;

	printf("Enter x number: ");
	scanf("%d", &x);

	result =x / (5 + 2) + 30 * x - 51 ;
	printf ("Result would be : %d \n", result );

	return 0;
}