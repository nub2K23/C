// Calculate factorial of a number
// Author = Rahul Date = 16/11/2023

#include <stdio.h>

int main()
{
    int num, i, fact ;
    printf ( "Enter a number: " ) ;
    scanf ( "%d", &num ) ;
    
    // Start the factorial multiplication from 1 untill it reaches the entered value.
    fact = i = 1 ;
    
    while ( i <= num )
    {
        fact *= i ; // fact = fact + 1 ;
        i++ ;
    }
    
    printf ( "Factorial value of %d = %d", num, fact ) ;
    return 0 ;
}