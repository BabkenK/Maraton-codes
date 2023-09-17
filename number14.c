#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age); // Read the age from the user

    if (age < 18)
    {
        printf("You are a minor\n");
    }
    else if (age >= 18 && age <= 65)
    {
        printf("You are an adult\n");
    }
    else if (age > 65)
    {
        printf("You are an elder\n");
    }
    else
    {
        printf("Error: Please enter a valid age\n");
    }

    return 0;
}