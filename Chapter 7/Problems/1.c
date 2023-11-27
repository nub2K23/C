#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice, i, num, fact;

    // Infinite loop for the menu
    while (1)
    {
        // Display menu options
        printf("Select your choice\n1. Factorial of a number\n2. Prime or not\n3. Odd or even\n4. Exit\n");
        printf("Your choice?\n\n");
        scanf("%d", &choice);

        // Switch statement to handle different choices
        switch (choice)
        {
            case 1:
                // Factorial calculation
                printf("Enter number: ");
                scanf("%d", &num);
                fact = 1;

                // Calculate factorial using a for loop
                for (i = num; i > 0; i--)
                    fact *= i;

                // Display the result
                printf("%d is the factorial of %d.\n\n", fact, num);
                break;

            case 2:
                // Prime number check
                printf("Enter number: ");
                scanf("%d", &num);

                // Check if the number is prime using a for loop
                for (i = 2; i < num; i++)
                {
                    if (num % i == 0)
                    {
                        printf("%d is not a prime number.\n\n", num);
                        break;
                    }
                }
                if (i == num)
                    printf("%d is a prime number.\n\n", num);
                
                break;

            case 3:
                // Odd or even check
                printf("Enter number: ");
                scanf("%d", &num);

                // Check if the number is odd or even
                if (num % 2 == 0)
                    printf("%d is even.\n\n", num);
                else
                    printf("%d is odd.\n\n", num);
                break;

            case 4:
                // Exit the program
                exit(0); // Terminates the program execution

            default:
                // Displayed when the user enters an invalid choice
                printf("Wrong choice!\a\n");
        }
    }
    return 0;
}