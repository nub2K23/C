// Print all the prime numbers from 1 to 300.
// Author = Rahul Date = 18/11/2023

#include <stdio.h>

int main() {
    int num, i;

    // Print a message indicating the intention of the program
    printf("Prime numbers from 1 to 300 are: \n1\t");

    // Loop through numbers from 1 to 300
    for (num = 1; num <= 300; num++) 
    {
        // Initialize the loop counter for checking factors
        i = 2;

        // Check for factors of the current number
        for (i = 2; i < num; i++) 
        {
            if (num % i == 0)
                break; // If a factor is found, break out of the loop
        }

        // If the loop completed without finding a factor, the number is prime
        if (i == num)
            printf("%d\t", num); // Print the prime number
    }

    return 0;
}