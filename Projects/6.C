// Program to calculate the first n terms of the given series.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int j = 1, i = 1; j <= n; j++, i += 2) {
        sum = sum + (n - (n + 1));
    }

    printf("Sum of the first %d terms: %d\n", n, sum);

    return 0;
}