#include <stdio.h>

int main() {
    char input_string[ ];
    
    printf("Enter a string: ");
    scanf("%s", input_string);
    
    int left = 0;
    int right = strlen(input_string) - 1;
    int isPalindrome = 1; 

    while (left < right) {
        if (input_string[left] != input_string[right]) {
            isPalindrome = 0; 
            break; 
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        printf("'%s' is a palindrome.\n", input_string);
    } else {
        printf("'%s' is not a palindrome.\n", input_string);
    }
    
    return 0;
}