// Accessing array elements using different ways.

#include <stdio.h>

int main() {
    int num[] = {24, 34, 12, 55, 56, 17};
    
    for (int i = 0; i < 6; i++) {
        printf("Address = %u ", &num[i]);
        printf("Element = %d %d ", num[i], *(num + i));
        printf("%d %d\n", *(i + num), i[num]);
    }

    return 0;
}