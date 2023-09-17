#include <stdio.h>

int main()
{
	int x;
	int y;
	int result;

	printf("Enter x number: ");
	scanf("%d", &x);
	
	printf("Enter y number: ");
	scanf("%d", &y);

	result =x * y + 21 * x / y - 200 ;
	printf ("Result would be : %d \n", result );

	return 0;
}