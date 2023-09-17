#include <stdio.h>

int main() {
    int grades_received;
    
    printf("Enter your grades received: ");
    if (scanf("%d", &grades_received) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1; 
    }

    if (grades_received >= 90 && grades_received <= 100) {
        printf("Class A\n");
    } else if (grades_received >= 80 && grades_received <= 89) {
        printf("Class B\n");
    } else if (grades_received >= 70 && grades_received <= 79) {
        printf("Class C\n");
    } else if (grades_received >= 60 && grades_received <= 69) {
        printf("Class D\n");
    } else if (grades_received < 60 && grades_received >= 0) {
        printf("Class E\n");
    } else {
        printf("Invalid input. Grade must be between 0 and 100.\n");
        return 1;
    }

    return 0;
}