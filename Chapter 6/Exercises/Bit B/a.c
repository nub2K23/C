// Print a multiplication table of a number entered through USER
// Author = Rahul Date = 20/11/2023

#include <stdio.h>

int main()
{
    // Declare variables i and num
    int i, num;

    // Prompt the user to enter a number
    printf("Enter a number: ");

    // Read the user input and store it in the variable num
    scanf("%d", &num);

    // Use a for loop to calculate and print the multiplication table for the entered number
    for(i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    // Return 0 to indicate successful execution
    return 0;
}
