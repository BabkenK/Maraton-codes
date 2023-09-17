#include <stdio.h>

int main() {
    int A, B;

    for (A = 0; A <= 1; A++) {
        for (B = 0; B <= 1; B++) {
            int result = (A && B) || (!B ^ A);
            printf("A=%d, B=%d, Result=%d\n", A, B, result);
        }
    }

    return 0;
}