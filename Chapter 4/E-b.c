// Determine whether a year is leap year or not using conditional operators.
// Author = Rahul Date = 16/11/2023

#include <stdio.h>

int main () {
    int yr ;
    printf("Enter the year: ") ;
    scanf("%d", &yr) ;

    // Check for leap year.
    yr % 4 == 0 ? printf("Leap Year.") : printf ( "Not a leap Year." ) ;

    return 0 ;
}