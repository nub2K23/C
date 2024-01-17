// Recurring program to find the sum of the given series.

#include <stdio.h>

void series_sum(int);

int main() {
    int n;

    printf("Enter number of terms to find the sum of: ");
    scanf("%d", &n);
    
    series_sum(n);

    return 0;
}

void series_sum(int n) {
    float sum = 0;

    for (float i = 1; i <= n; i++) {
        sum = sum + (1 / i);
    }

    printf("Sum of series = %.2f.", sum);
}