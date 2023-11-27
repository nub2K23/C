// Print all Ramanujan Numbers 
// Author = Rahul Date = 20/11/2023

#include <stdio.h>

int main() {
    int limit; // Specify the upper limit
    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Taxicab numbers (Ramanujan-Hardy numbers) up to %d:\n", limit);

    for (int a = 1; a <= limit; a++) 
    {
        for (int b = a + 1; b <= limit; b++) 
        {
            for (int c = a + 1; c <= limit; c++) 
            {
                for (int d = c + 1; d <= limit; d++) 
                {
                    if (a * a * a + b * b * b == c * c * c + d * d * d) 
                    {
                        printf("%d = (%d, %d) = (%d, %d)\n", a * a * a + b * b * b, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}