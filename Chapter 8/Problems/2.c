// Make a function to calculate a raised to the power b.
// Author = Rahul Date = 24/11/2023

#include <stdio.h>
float power(float, int);
int main()
{
    float x, pow;
    int y;
    printf("Enter two numbers: ");
    scanf("%f %d", &x, &y);
    pow = power(x, y);
    printf("%.2f raised to the power %d is %.2f", x, y, pow);
    return 0;
}

float power(float x, int y)
{
    float pow = 1;
    for (int i = 1; i <= y; i++)
    {
        pow = pow * x;
    }
    return (pow);
}