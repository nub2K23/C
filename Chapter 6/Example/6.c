// Determine whether a number is prime or not. Use 'break' statement.

#include <stdio.h>

int main() {
    // Declare variables
    int num, i;

    // Input a number from the user
    printf("Enter the num: ");
    scanf("%d", &num);

    // Initialize loop counter
    i = 2;

    // Check for factors using a while loop
    while (i <= num - 1)
    {
        // Check if num is divisible by i
        if (num % i == 0)
        {
            // If it is divisible, not a prime number
            printf("Not a prime number.\n");

            // Exit the loop
            break;
        }

        // Move to the next value of i
        i++;
    }

    // Check if the loop completed without finding a factor
    if (i == num)
        printf("Prime Number.\n");

    return 0;
}