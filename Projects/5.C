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

void series_sum(int n)
{
    int sum, diff = 0, even = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even += i;
        }
        else
        {
            diff += i;
        }
    }
    printf("Sum of first '%d' terms of series = %d.\n", n, sum = diff - even);
}