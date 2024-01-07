#include <stdio.h>
int main()  {
    static int count = 5;
    printf("count = %d\n", count--);
    if (count != 0) {
        main();
    }
    return 0;
}

/*  Output
    count = 5
    count = 1
    count = 4
    count = 3
    count = 2

*/