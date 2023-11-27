// Print out all Armstrong numbers from 1 to 500.
// Author = Rahul Date = 17/11/2023

#include <stdio.h>

int main ()
{
    int n, n1, n2, n3, i = 1;
    while (i <= 500)
    {
        n = i ;
        n1 = n / 100;           // Extract the hundreds place digit
        n2 = (n % 100 ) / 10;   // Extract the tens place digit
        n3 = n % 10;            // Extract the ones place digit
        
        if ( n == (n1 * n1 *n1) + (n2 * n2 * n2) + (n3 * n3 * n3) )
        {
            printf("%d is an Armstrong number.\n", n);
        }
        i++ ;
    }
    return 0;
}