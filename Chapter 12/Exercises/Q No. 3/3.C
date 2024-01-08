#include <stdio.h>
#include "Interest.H"

int main() {
    float x, y, z;
    float Simple_Interest, Amount;
    
    printf("Enter Principal, Rate & Time respectively: ");
    scanf("%f %f %f", &x, &y, &z);

    Simple_Interest = SI(x, y, z);
    Amount = AMOUNT(x, Simple_Interest);  
    
    printf("Amount = %.2f, SI = %.2f", Amount, Simple_Interest);

    return 0;
}