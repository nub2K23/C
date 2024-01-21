// Program to find whether a string is Palindrome or not using a function.

#include <stdio.h>
#include <string.h>

int isPalindrome(char []);

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    if (isPalindrome(input)) {
        printf("%s is a palindrome!\n", input);
    } else {
        printf("%s is not a palindrome.\n", input);
    }

    return 0;
}

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0;                                   // Not a palindrome
        }
        left++;
        right--;
    }

    return 1; // Palindrome
}