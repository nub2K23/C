#include <stdio.h>

int main () {
    int i = 0 ;
    
    // Here, first the comparison of operands takes place then the incrementation of i takes place.
    while ( i++ < 10 ) {
        printf("%d\n", i) ;
    }
    
    return 0 ;
}