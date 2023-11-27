// Print a table of values for intelligence formula
// Author = Rahul Date = 20/11/2023

#include <stdio.h>

int main()
{
    int i, y, n = 1;
    float z;
       
    for (y = 1; y <= 6; y++)
    {
        for (z = 5.5; z <= 12.5; z += 0.5)
        {
            // Formula for IQ
            i = 2 + (y + 5.5 * z);
            printf("%d = 2 + (%d + %.1f * x)\t\t", i, y, z);

            // Next line printer
            if (n % 4 == 0)
                printf("\n");
            n++; // Increase count by 1 so that the program goes to next line every 4 cycles.
            
            // Reset the value of i = 0
            i = 0;
        }
    }

    return 0;
}