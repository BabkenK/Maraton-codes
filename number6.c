#include <stdio.h>

int main()
{
	int x;
	int result;

	printf("Enter x number: ");
	scanf("%d", &x);

	result = 4 * x + 21 * x * x -12;
	printf ("Result would be : %d \n", result );

	return 0;
}