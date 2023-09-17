#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    int a = num1, b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd1 = a;

    a = gcd1;
    b = num3;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd_result = a;

    printf("The greatest common divisor of %d, %d, and %d is %d\n", num1, num2, num3, gcd_result);

    return 0;
}