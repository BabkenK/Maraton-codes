#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &num);
    } while (num <= 0);

    printf("Multiplication table for %d:\n", num);

    for (int i = 1; i <= 10; i++) {
        printf("%d multiply %d = %d\n", num, i, num * i);
    }

    return 0;
}