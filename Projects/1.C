// Program to find greatest number among 3 numbers.

#include <stdio.h>
void findmax(int *, int, int, int);
int main()
{
    int n1, n2, n3, max;
    printf("Enter the 3 no.s: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    findmax(&max, n1, n2, n3);
    printf("Max among %d, %d, %d is %d.", n1, n2, n3, max);
    return 0;
}

void findmax(int *ptr, int num1, int num2, int num3)
{
    *ptr = num1;
    if (num1 < num2)
    {
        *ptr = num2;
    }
    if (*ptr < num3)
    {
        *ptr = num3;
    }
}