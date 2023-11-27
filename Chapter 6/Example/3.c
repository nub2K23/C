// Demonstration of nested loops

#include <stdio.h>

int main()
{
    int r, c;
    
    // Outer Loop
    for ( r = 1; r <= 3; r++ )
    {    
        // Inner Loop
        for ( c = 1; c <= 2; c++ )
            {
                printf("r = %d c = %d Sum = %d\n", r, c, r + c);
            }
    }
    return 0;
}

/*
    Output:
    r = 1 c = 1 Sum = 2
    r = 1 c = 2 Sum = 3
    r = 2 c = 1 Sum = 3
    r = 2 c = 2 Sum = 4
    r = 3 c = 1 Sum = 4
    r = 3 c = 2 Sum = 5
*/