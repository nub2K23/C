// Find the max number among 3 using conditional operators.
// Author = Rahul Date = 16/11/2023

#include <stdio.h>

int main ()
{
    int n1, n2, n3 ;
    
    // Input the numbers
    printf("Enter the numbers: ") ;
    scanf("%d %d %d", &n1, &n2, &n3 ) ;

    // Compare numbers & output result
    n1 > n2 ? ( n1 > n3 ? printf("%d is greatest.", n1 ) : printf("%d is the greatest.", n3) ) : n2 > n3 ? printf("%d is greatest.", n2) : printf("%d is the greatest.", n3) ;

    return 0 ;
}