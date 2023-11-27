#include <stdio.h>

int main()
{
    int i ;
    while ( i = 10 )
    {
        printf ("%d\n", i) ;
        i = i + 1 ;
    }
    return 0 ;
}

/*
The expression i = 10 is an assignment, not a comparison. In C, an assignment operation returns the assigned value, and since the value 10 is non-zero, the loop 
will execute indefinitely.
*/