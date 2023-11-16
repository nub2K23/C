#include <stdio.h>

int main()
{
    int i = 1;
    while (i<=10)
    {
        printf("%d", i) ;
        // Instead of writing i = i + 1, we can use "i++"
        i++ ;
    }
    return 0 ;
}