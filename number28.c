#include <stdio.h>

int main() { 
    int num1, num2;

    printf("Enter the number 1: ");
        scanf("%d", &num1);

    printf("Enter the number 2: ");
        scanf("%d", &num2);

    if (num1 != 0 && num2 != 0 && num1 % num2 == 0 && num2 % num1 == 0) {
        printf("Numbers can divide each other.\n");
    } else { 
        printf("Numbers cannot divide each other.\n");
    }

    return 0;
}