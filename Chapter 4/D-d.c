// BMI Calculator
// Author = Rahul Date 16/11/2023

#include <stdio.h>

int main ()
{
    float height, weight, bmi ;
    printf("Enter the height(in meters) and weight(in kilograms) respectively: ") ;
    scanf("%f %f", &height, &weight ) ;

    // Calculate the BMI using the formulae provided.
    bmi = weight / ( height * height ) ;

    printf("BMI: %.1f\nCategory: ", bmi) ;

    if ( bmi < 15 )
        printf("Starvation.") ;
    else if ( bmi >= 15.1 && bmi <= 17.5 )
        printf("Anorexic.") ;
    else if ( bmi >= 17.6 && bmi <= 18.5 )
        printf("Underweight.") ;
    else if ( bmi >= 18.6 && bmi <= 24.9 )
        printf("Ideal.") ;
    else if ( bmi >= 25.0 && bmi <= 29.9 )
        printf("Overweight.") ;
    else if ( bmi >= 30.0 && bmi <= 39.9 )
        printf("Obese.") ;
    else
        printf("Moribidly Obese.") ;

    return 0 ;
}