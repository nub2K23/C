// Print the characters and their ASCII values from 0 to 255.
// Author = Rahul Date 17/11/2023

#include <stdio.h>

int main ()
{
    // Initialize the variable
    int i = 0 ;

    while ( i <= 255 )
    {
        printf("ASCII: %d Character: %c\n", i, i); // %c can be used to represent the character equal to the ASCII value of 'i'.
        i++ ;
    }
    return 0 ;
}