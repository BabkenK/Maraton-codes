#include <stdio.h>

int main() {
    int a = 0;
    while (a >= 0 && a <= 100) {
        printf("%d\n", a);
        ++a;
        if (a % 2 != 0) {
            printf("Odd number : %d\n", a);
        }
    }
    printf("end\n");

    return 0;
}