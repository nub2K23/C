// Calculation of SI for 3 sets of P, N & R.
// Author = Rahul Date = 18/11/2023

#include <stdio.h>

int main()
{
    int p, count ;
    float n, r, si, amount ;

    for ( count = 1; count <= 3 ; count++ )
    {
        // Take User input
        printf("Enter Principal, Number of yrs & Rate: ");
        scanf("%d %f %f", &p, &n, &r);

        // SI formula
        si = p * n * r / 100;
        // Amount = SI + Principal
        amount = si + p ;

        printf("Simple Interest: Rs.%.2f\n", si);
        printf("Amount: Rs.%.2f\n", amount);
    }
    return 0;
}