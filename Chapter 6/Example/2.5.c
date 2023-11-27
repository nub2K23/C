#include <stdio.h>

int main()
{
    int i;
    
    // First i gets compared then gets incremented
    for ( i = 0; i++ <= 10 ; )
        printf("%d\n", i);
    return 0;
}

/*
    Output:
    1
    2
    3
    4
    5
    6
    7
    8
    9
    10
    11    
*/