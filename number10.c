#include <stdio.h>

int main() {
    char sym;

    printf("Enter the symbol : ");
    scanf("%c", &sym);

    if (sym >= '0' && sym <= '9') {
        printf("True: %c is a digit.\n", sym);
    } else {
        printf("False: %c is not a digit.\n", sym);
    }

    return 0;
}