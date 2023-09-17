#include <stdio.h>

int main() {
    int num_lines;
    
    printf("Enter the number of lines: ");
    scanf("%d", &num_lines);

    for (int i = 1; i <= num_lines; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
