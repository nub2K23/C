// Calculate sum using a function

#include <stdio.h>
int sum(int, int);
int main()
{
    int a, b;
    int c;
    printf("Enter a number: ");
    scanf("%d %d", &a, &b);
    c = sum(a, b);
    printf("%d + %d = %d", a, b, c);
    return 0;
}

int sum(int x, int y)
{
    int s = x + y;
    return (s);
}