// Program to calculate the first n terms of the given series.

#include <stdio.h>

void sumofno(int);
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    sumofno(n);
    return 0;
}

void sumofno(int n) {
    int sum = 0, diff = 0;
    if (n == 0) {
        printf("Invalid Input.");
    }
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
        else {
            diff += i;
        }
    }
    printf("Sum of the series: %d", sum - diff);
}