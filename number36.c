#include <stdio.h>
#include <stdio.h>

int main ()
{
	int num1;
	int num2;
	int sum;

	printf("Enter the number 1: ");
	scanf("%d", &num1 );
	printf("Enter the number 2: ");
	scanf("%d", &num2);
	
	if (num1 % 2 ==0 && num2 % 2 ==0){
		sum = num1 + num2;
		printf("Both numbers are even, so their sum is: %d \n", sum);
	}else{
		printf("If one of number is not even, sum will not calculated\n");
	}
	return 0;
}