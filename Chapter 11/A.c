#include <stdio.h>

int x = 21;

int main() {
    extern int y;
    printf("%d %d", x, y);
    return 0;
}

int y = 31;