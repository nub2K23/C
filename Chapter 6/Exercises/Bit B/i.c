#include<stdio.h>

int main() {
    int rows = 4; // Number of rows in the pattern
    int count = 1; // Start with the first number

    for (int i = 1; i <= rows; i++) 
    {
        // Print leading spaces based on the row
        for (int space = 1; space <= rows - i; space++) 
        {
            printf("   ");
        }

        // Print the numbers for the current row
        for (int j = 1; j <= i; j++) 
        {
            printf("%-5d", count++);
        }

        // Move to the next line for the next row
        printf("\n");
    }

    return 0;
}