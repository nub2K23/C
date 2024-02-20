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

    // a) Show address of each character in the string
    showAddress(str1);

    // b) Concatenate two strings without using strcat function
    concatenateWithoutStrcat(str1, str2);
    printf("Concatenated string without strcat: %s\n", str1);

    // Resetting str1 for further operations
    strcpy(str1, "");
    strcpy(str1, str2);

    // c) Concatenate two strings with strcat function
    concatenateWithStrcat(str1, str2);
    printf("Concatenated string with strcat: %s\n", str1);

    // d) Compare two strings
    int result = compareStrings(str1, str2);
    printf("Comparison result: %d\n", result);

    // e) Calculate length of string (using pointers)
    int length = calculateStringLength(str1);
    printf("Length of the string: %d\n", length);

    // f) Convert all lowercase characters to uppercase
    convertToUppercase(str1);
    printf("String with uppercase characters: %s\n", str1);

    // Resetting str1 for further operations
    strcpy(str1, "");
    strcpy(str1, str2);

    // g) Convert all uppercase characters to lowercase
    convertToLowercase(str1);
    printf("String with lowercase characters: %s\n", str1);

    // h) Calculate the number of vowels
    int vowelCount = countVowels(str1);
    printf("Number of vowels: %d\n", vowelCount);

    // i) Reverse the string
    reverseString(str1);
    printf("Reversed string: %s\n", str1);

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
