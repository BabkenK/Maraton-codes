#include <stdio.h>

int main() {
    char symbol1, symbol2;

    printf("Enter the first one: ");
    scanf(" %c", &symbol1); 
    printf("Enter the second one: ");
    scanf(" %c", &symbol2);

    
    if ((symbol1 >= 'A' && symbol1 <= 'Z' && symbol2 >= 'a' && symbol2 <= 'z' &&
         symbol1 - 'A' == symbol2 - 'a') ||
        (symbol1 >= 'a' && symbol1 <= 'z' && symbol2 >= 'A' && symbol2 <= 'Z' &&
         symbol1 - 'a' == symbol2 - 'A')) {
        printf("The symbols represent the same letter - uppercase and lowercase.\n");
    } else {
        printf("The symbols do not represent the same letter - uppercase and lowercase.\n");
    }

    return 0;
}