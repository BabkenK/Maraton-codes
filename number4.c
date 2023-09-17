#include <stdio.h>

int main()
{
	int number1;
	int number2;
	int total;

	printf("Enter first number: ");
	scanf("%d", &number1);

	printf("Enter second number: ");
	scanf("%d", &number2);
	
	total = number1 + number2;
	printf("The total %d, %d: %d\n ", number1, number2, total);
	
	return 0;
}
