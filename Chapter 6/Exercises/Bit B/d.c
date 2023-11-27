// Calculate the first 7 terms of the natural logarithm
// Author = Rahul Date = 20/11/2023

#include <stdio.h>
#include <math.h>

int main() 
{
    // Declare variables to store user input, current term, and the sum of the series
    double x, term, sum = 0;

    // Input 'x' from the keyboard
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    // Calculate the sum of the series up to the first seven terms
    for (int i = 1; i <= 7; i++) 
    {
        // Calculate the current term using the formula and add it to the sum
        term = pow((x - 1) / x, i) / 2.0;
        sum += term;
    }

    // Add the first term separately (i = 0 in the formula)
    sum += (x - 1) / x;

    // Print the result
    printf("Sum of the series: %.4f\n", sum);

    return 0;
}