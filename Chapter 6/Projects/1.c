// Find whether a number entered is prime or not.
// Author = Rahul Date = 18/11/2023

#include <stdio.h>

int main()
{
    // Declare variables
    int i, num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i=2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            printf("Not a prime number.");
            break;
        }
    }
    if (i == num)
        printf("Prime number.");
    return 0;
}