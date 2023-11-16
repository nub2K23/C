// Calculate value of 'a' raised to the power of 'b' from user input
// Author = Rahul Date = 16/11/2023

#include <stdio.h>

int main()
{
    float x, power ;
    int y, i ;
    
    // Get the values of x and y.
    printf ("Enter 2 numbers: ") ;
    scanf ("%f %d", &x, &y) ;
    
    power = i = 1 ;
    
    while ( i <= y )
    {
        power = power * x ;
        i++ ;
    }
    
    printf ( "%f raised to the power %d is %f.\n", x, y, power ) ;
    return 0 ;
}