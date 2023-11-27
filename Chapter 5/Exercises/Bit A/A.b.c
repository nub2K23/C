#include <stdio.h>

int main()
{
    int x = 4, y, z ;
    y = --x ; // Value of x gets pre-deceremented
    z = x-- ; // Value of x gets post-decremented
    printf ("%d %d %d\n", x, y, z) ;
    return 0 ;
}

/* Output:
    2 3 3
*/