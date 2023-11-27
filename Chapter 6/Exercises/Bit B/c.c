// Calculate 10 sets of CI
// Author = Rahul Date = 20/11/2023

#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
    float p, r, q, a;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter set %d: principal, rate, number of years, number of times compounded: ", i);
        scanf("%f %f %d %f", &p, &r, &n, &q);

        // Convert the interest rate to a decimal
        r = r / 100.0;

        a = p * pow((1 + r / q), n * q);

        printf("Amount for set %d = %.2f\n", i, a);
    }

    return 0;
}