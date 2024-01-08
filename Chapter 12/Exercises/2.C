#include <stdio.h>
#include "2.H"

int main() {
    int x, y, z;
    char ch;
    int mean, modulous, uppercase, big;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &x, &y);
    mean = AVG(x, y);
    printf("Mean of %d & %d is %d.\n\n",x, y, mean);

    printf("Enter a integer: ");
    scanf("%d", &x);
    modulous = MOD(x);
    printf("Absolute value of %d is: %d.\n\n", x, modulous);

    printf("Enter an lowercase alphabet: ");
    scanf("%c", &ch);
    uppercase = CONVERTALPHA(ch);
    printf("Lowercase: %c, Uppercase: %c.\n\n", ch, uppercase);
    
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    big = BIGNUM(x, y, z);
    printf("The biggest among %d, %d & %d is: %d.\n\n",x, y, z, big);

    return 0;
}