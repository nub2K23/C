// Calculate factorial using functions
// Author = Rahul Date = 24/11/2023

#include<stdio.h>
int fact(int);
int main()
{
    int num, factorial;
    printf("Enter a the number: ");
    scanf("%d", &num);
    factorial = fact(num);
    printf("Factorial of %d = %d.", num, factorial);
    return 0;
}

int fact(int num)
{
    int factorial = 1;
    for(int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    return (factorial);
}