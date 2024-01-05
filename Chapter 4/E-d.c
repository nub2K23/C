// To check if the sum of sine and cosine of an angle is 1.
// Author = Rahul Date = 16/11/2023

#include <stdio.h>
#include <math.h>

int main () {
    float ang, sine, cosine, sums2, angrad ;
    
    //Input angle in degrees
    printf("Enter the angle (in degrees) of the triangle: ") ;
    scanf("%f", &ang ) ;

    // Convert degrees to radians for the formula
    angrad = ang * 3.14 / 180 ;

    // Calculate the sine and cosine of the angle
    sine = sin ( ang ) ;
    cosine = cos ( ang ) ;

    // Calculate the sum of squares
    sums2 = ( sine * sine ) + ( cosine * cosine ) ;

    // Check if the sum of squares is equal to 1
    if ( sums2 == 1 ) {
        printf("The sum of squares sine and cosine of the angle is equal to 1.") ;
    } else { 
        printf("The sum of squares of sine and cosine of the angle is not equal to 1.") ;
    }
    return 0 ;
}