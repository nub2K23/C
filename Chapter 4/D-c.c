// Program to grade steel on its condition
// Author = Rahul Date 16/11/2023

#include <stdio.h>

int main ()
{
    // Declare the variables hard=hardness, ccont= carbon content, tstr= tensile strength
    float hard, ccont, tstr ;
    printf("Enter the hardness, carbon content & tensile strength respectively: ") ;
    scanf("%f %f %f", &hard, &ccont, &tstr) ;
    
    // Output result
    if ( hard > 50 && ccont < 0.7 && tstr > 5600 )
        printf("Steel Grade is 10.") ;
    else if ( hard > 50 && ccont < 0.7 )
        printf("Steel Grade is 9.") ;
    else if ( ccont < 0.7 && tstr > 5600 )
        printf("Steel Grade is 8.") ;
    else if ( hard > 50 && tstr > 5600 )
        printf("Steel Grade is 7.") ;
    else if ( hard > 50 || ccont < 0.7 || tstr > 5600)
        printf("Steel Grade is 6.") ;
    else 
        printf("Steel Grade is 5.") ;
    
    return 0 ;
}