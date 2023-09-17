#include <stdio.h>

int main() {
    int num, a = 0, b = 1, c = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Fibonacci progression up to %d: %d, %d", num, a, b);

    while (c <= num) {
        printf(", %d", c);
        a = b;
        b = c;
        c = a + b;
    }

    printf("\n");

    return 0;
}