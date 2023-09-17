#include <stdio.h>

int main() {
    char sym;

    printf("Enter the uppercase letter: ");
    scanf("%c", &sym);

    if (sym >= 'A' && sym <= 'Z') {
        char lowercase_sym = sym + ('a' - 'A');

        printf("The needed lowercase letter is: %c\n", lowercase_sym);
    } else {
        printf("Not valid: please enter the uppercase letter.\n");
    }

    return 0;
}