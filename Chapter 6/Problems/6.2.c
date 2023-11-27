// Sum of first seven terms of a series
// Author = Rahul Date = 20/11/2023

#include <stdio.h>

int main()
{
    // Initialize variables: i is the outer loop counter, j is the inner loop counter,
    // fact holds the factorial, and sum accumulates the sum of the series.
    int i = 1, j;
    float fact, sum = 0.0;

    // Outer loop iterates from i = 1 to i = 7
    for (i = 1; i <= 7; i++)
    {
        // Reset the factorial for each value of i
        fact = 1.0;

        // Inner loop calculates the factorial of the current i
        for (j = 1; j <= i; j++)
        {
            // Multiply each value from 1 to i to calculate the factorial
            fact *= j;
        }

        // Add the term i / fact to the sum
        sum = sum + i / fact;
    }

    // Print the final sum of the series
    printf("Sum of the series is %f", sum);

    // Return 0 to indicate successful execution
    return 0;
}
