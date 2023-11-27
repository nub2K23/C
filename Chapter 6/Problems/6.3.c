// Print all possible combinations of 1, 2 & 3
// Author = Rahul Date = 20/11/2023

#include <stdio.h>

int main()
{
    // Declare three variables i, j, and k for the loops
    int i, j, k;

    // Outer loop for i (1 to 3)
    for (i = 1; i <= 3; i++)
    {
        // Middle loop for j (1 to 3)
        for (j = 1; j <= 3; j++)
        {
            // Inner loop for k (1 to 3)
            for (k = 1; k <= 3; k++)
            {
                // Print the current combination of i, j, and k
                printf("%d %d %d\n", i, j, k);
            }
        }
    }

    // Return 0 to indicate successful execution
    return 0;
}
s