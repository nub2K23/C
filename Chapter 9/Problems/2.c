// Program that calculates power and factorial of a number using in one call.

#include<stdio.h>
void power_fact(float, int, int, float *, int *);
int main ()
{
    float a;
    int b, num, fact;
    float pow;
    printf("Enter 'a' and 'b' for calculating 'a' raised to 'b': ");
    scanf("%f %d", &a, &b);
    printf("Enter number whose factorial is to be calculated: ");
    scanf("%d", &num);
    power_fact(a, b, num, &pow, &fact);
    printf("Power = %.2f Factorial = %d", pow, fact);
    return 0;
}

void power_fact(float x, int y, int num, float *power, int *fact)
{
    float res = 1;
    for (int i = 1; i <= y; i++)
        res *= x;
    *power = res;
    res = 1;
    for (int i = 1; i <= num; i++)
        res *= i;
    *fact = res;
}