
#include <stdio.h>

int main() {
    int num1;
    int num2;

    printf("Enter number1: ");
    scanf("%d", &num1);
    
    printf("Enter number2: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("Biggest number is: %d\n", num1);
    } else {
        printf("Biggest number is: %d\n", num2);
    }

    return 0;
}