#include <stdio.h>
#define HLINE for(i = 0; i <= 78; i++)\
                printf("%c", 196);

#define SIGMA 69

int main() {
    register unsigned i = 0;
    for (i; i < 10; i++) {
        printf("%d\n", SIGMA + i);
    }

    HLINE;
        
    return 0;
}