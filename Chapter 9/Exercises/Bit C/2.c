#include<stdio.h>

void weight_convrt(int, float *, float *, float *);

int main()
{
    int kg;
    float gms, tons, lbs;
    
    printf("Enter the weight in Kilogram(s): ");
    scanf("%d", &kg);
    
    weight_convrt(kg, &gms, &tons, &lbs);
    
    printf("Kg(s) = %d\nGm(s) = %.2f\nTonne(s) = %.2f\nPound(s) = %.2f", kg, gms, tons, lbs);
    
    return 0;
}

void weight_convrt(int kgs, float *grams, float *tonnes, float *pounds)
{
    *grams = kgs * 1000.0;  // Correct the conversion from kg to grams
    *tonnes = kgs / 1000.0;
    *pounds = kgs * 2.2046;
}