// Determine overtime pay of employees
// Author = Rahul Date = 16/11/2023

#include <stdio.h>

int main()
{
    // Initialize the variables 
    float otpay ;
    int hours, i ;
    
    while ( i <= 10 ) // Loop for 10 employees.
    {
        printf ("Enter the number of hours: ") ;
        scanf ("%d", &hours) ;
        
        if ( hours > 40 )
            otpay = ( hours - 40 ) * 120.0 ;
        else
            otpay = 0 ;
        
        printf ( "Hours = %d. Overtime Pay = Rs.%.2f\n", hours, otpay ) ;
        
        // Increment the loop counter.
        i++ ; // i = i + 1 ;
    }
    
    return 0 ;
}