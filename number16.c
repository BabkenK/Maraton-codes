#include <stdio.h>

int main() {
    int human_height;
    
    printf("Enter your correct human height: ");
    if (scanf("%d", &human_height) != 1) {
        printf("Invalid input. Please enter a valid human height.\n");
        return 1; 
    }

    if (human_height >= 150) {
        printf("You are eligible.\n");
    } else {
        printf("Sorry, you are not eligible.\n");
    }

    return 0;
}