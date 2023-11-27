#include <stdio.h>

int main ()
{
    while ( 'a' < 'b' )
        printf("Mlayalam is a palindrome") ;
    return 0 ;
}

/*
The loop condition 'a' < 'b' will always be true because, in the ASCII character set, the character 'a' has a lower numeric value than 'b'. Therefore, the loop will run 
indefinitely, repeatedly printing "Malayalam is a palindrome" without ever terminating.
*/