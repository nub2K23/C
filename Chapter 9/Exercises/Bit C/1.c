#include <stdio.h>

void cir_swap(int *, int *, int *);
int main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Before swap: x = %d y = %d z = %d\n", a, b, c);
    for (int i = 1; i < 4; i++)
    {
        cir_swap(&a, &b, &c);
        printf("After swap: x = %d y = %d z = %d\n", a, b, c);
    }
    return 0;
}

void cir_swap(int *x, int *y, int *z)
{
    int temp;
    temp = *x;
    *x = *z;
    *z = *y;
    *y = temp;
}