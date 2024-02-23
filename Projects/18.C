#include <stdio.h>
#include <string.h>

// Function to show address of each character in the string
void showAddress(const char *);

// Function to concatenate two strings without using strcat function
void concatenateWithoutStrcat(char *, const char *);

// Function to concatenate two strings with strcat function
void concatenateWithStrcat(char *, const char*);

// Function to compare two strings
int compareStrings(const char *, const char *);

// Function to calculate the length of string using pointers
int calculateStringLength(const char *);

// Function to convert all lowercase characters to uppercase
void convertToLowercase(char *);

// Function to convert all uppercase characters to lowercase
void convertToUppercase(char *);

// Function to calculate the number of vowels
int countVowels(const char *str);

// Function to reverse the string
void reverseString(char *str);

int main() {
    char str1[100], str2[50];
    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

        int choice;

    do {
        // Display menu options
        printf("\nMenu:\n");
        printf("1. Show address of each character in the string\n");
        printf("2. Concatenate two strings without using strcat function\n");
        printf("3. Concatenate two strings with strcat function\n");
        printf("4. Compare two strings\n");
        printf("5. Calculate length of string (using pointers)\n");
        printf("6. Convert all lowercase characters to uppercase\n");
        printf("7. Convert all uppercase characters to lowercase\n");
        printf("8. Calculate the number of vowels\n");
        printf("9. Reverse the string\n");
        printf("0. Exit\n");

        // Get user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the first string: ");
                scanf("%s", str1);
                showAddress(str1);
                break;
            case 2:
                printf("Enter the first string: ");
                scanf("%s", str1);
                printf("Enter the second string: ");
                scanf("%s", str2);
                concatenateWithoutStrcat(str1, str2);
                printf("Concatenated string without strcat: %s\n", str1);
                break;
            case 3:
                printf("Enter the first string: ");
                scanf("%s", str1);
                printf("Enter the second string: ");
                scanf("%s", str2);
                concatenateWithStrcat(str1, str2);
                printf("Concatenated string with strcat: %s\n", str1);
                break;
            case 4:
                printf("Enter the first string: ");
                scanf("%s", str1);
                printf("Enter the second string: ");
                scanf("%s", str2);
                int result = compareStrings(str1, str2);
                printf("Comparison result: %d\n", result);
                break;
            case 5:
                printf("Enter the string: ");
                scanf("%s", str1);
                int length = calculateStringLength(str1);
                printf("Length of the string: %d\n", length);
                break;
            case 6:
                printf("Enter the string: ");
                scanf("%s", str1);
                convertToUppercase(str1);
                printf("String with uppercase characters: %s\n", str1);
                break;
            case 7:
                printf("Enter the string: ");
                scanf("%s", str1);
                convertToLowercase(str1);
                printf("String with lowercase characters: %s\n", str1);
                break;
            case 8:
                printf("Enter the string: ");
                scanf("%s", str1);
                int vowelCount = countVowels(str1);
                printf("Number of vowels: %d\n", vowelCount);
                break;
            case 9:
                printf("Enter the string: ");
                scanf("%s", str1);
                reverseString(str1);
                printf("Reversed string: %s\n", str1);
                break;
            case 0:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}

void showAddress(const char *str) {
    printf("Address of each character in the string:\n");
    while (*str != '\0') {
        printf("%c: %p\n", *str, (void*)str);
        str++;
    }
}

void concatenateWithoutStrcat(char *dest, const char *src) {
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

void concatenateWithStrcat(char *dest, const char *src) {
    strcat(dest, src);
}

int compareStrings(const char *str1, const char *str2) {
    return strcmp(str1, str2);
}

int calculateStringLength(const char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

void convertToLowercase(char *str) {
    while (*str != '\0') {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + 32;
        }
        str++;
    }
}

void convertToUppercase(char *str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32;
        }
        str++;
    }
}

int countVowels(const char *str) {
    int count = 0;
    while (*str != '\0') {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            count++;
        }
        str++;
    }
    return count;
}

void reverseString(char *str) {
    int length = calculateStringLength(str);
    char *start = str;
    char *end = str + length - 1;
    while (start < end) {
        // Swap characters
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move towards the center
        start++;
        end--;
    }
}
