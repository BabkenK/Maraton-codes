#include <stdio.h>

int main() {
    char opcode;
     printf("\tWelcome to the Calculator program\n");
    
    while (1) {
        
    int a = 0;
    int b = 0;
    

    printf("Please enter the first number: ");
    scanf("%d", &a);
    printf("Please enter the second number: ");
    scanf("%d", &b);

    printf("Please enter the operation code (+, -, *, /, Q for exit): ");
    scanf(" %c", &opcode);

    if (opcode == '+') {
        printf("Result = %d\n", a + b);
    } else if (opcode == '-') {
        printf("Result = %d\n", a - b);
    } else if (opcode == '*') {
        printf("Result = %d\n", a * b);
    } else if (opcode == '/') {
        if (b != 0) {
            printf("Result = %d\n", a / b);
        } else {
            printf("Cannot divide by zero\n");
        }
            return 1;
            
    } else if (opcode == 'Q') {
        printf("Exiting the program\n");
    } else {
        printf("Invalid operation code\n");
        }
    }

    return 0;
}
            
        
