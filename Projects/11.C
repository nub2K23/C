#include <stdio.h>

int main() {
    int lines;

    // Input the number of lines from the user
    printf("Enter the number of lines: ");
    scanf("%d", &lines);

    // Print the triangle of stars
    for (int i = 1; i <= lines; i++) {
        // Print spaces before the stars
        for (int space = 1; space <= lines - i; space++) {
            printf(" ");
        }

        // Print the stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}