// Number swapping using a macro.
#include <stdio.h>
#define SWAP(a, b, c) c = a; a = b; b = c;

int main() {
    int x, y, z;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swap: x = %d, y = %d.\n", x, y);

    SWAP(x, y, z);

    printf("After swap: x = %d, y = %d.\n", x, y);

    return 0;
}