//To find type of triangle through the angles
// Author = Rahul Date = 15/11/2023

#include <stdio.h>

int main() {
    float s1, s2, s3 ;

    // Input lengths of three sides
    printf ("Enter the lengths of three sides of the triangle:\n") ;
    scanf ("%f %f %f", &s1, &s2, &s3 ) ;
    
    // Check for equilateral, isosceles, and scalene
    if (s1 == s2 && s2 == s3)
        printf ("The triangle is an equilateral triangle.\n") ;
    else if (s1 == s2 || s2 == s3 || s1 == s3)
        printf ("The triangle is an isosceles triangle.\n") ;
    else
        printf ("The triangle is a scalene triangle.\n") ;
    

    // Check for right-angled triangle using Pythagorean theorem
    if (s1*s1 + s2*s2 == s3*s3 || s1*s1 + s3*s3 == s2*s2 || s2*s2 + s3*s3 == s1*s1)
        printf ("The triangle is a right-angled triangle.\n") ;
    else
        printf ("The triangle is not a right-angled triangle.\n") ;

    return 0;
}