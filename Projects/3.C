// Program to find sum and product of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0, product = 1;
    int temp;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num > 0) {
        temp = num % 10;
        sum += temp;
        product *= temp;
        num /= 10;
    }

    printf("Sum = %d, Product = %d.\n", sum, product);

    return 0;
}