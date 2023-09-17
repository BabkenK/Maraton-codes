#include <stdio.h>

int main() {
    int num, shift, result;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter the number of positions to shift left: ");
    scanf("%d", &shift);

    result = num << shift;

    printf("Result after left shift: %d\n", result);

    return 0;
}