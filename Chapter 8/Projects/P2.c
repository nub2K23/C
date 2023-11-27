// Calculate the square of a number using a function.

#include<stdio.h>
float square(float);
int main()
{
    int a;
    float sq;
    printf("Enter a number: ");
    scanf("%d", &a);
    sq = square(a);
    printf("The square of %d is : %.2f", a, sq);
    return 0;
}

float square(float x)
{
    int s = x * x;
    return (s);
}