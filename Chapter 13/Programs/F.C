// Passing an entire array to a function.

#include <stdio.h>

void display1(int *, int);
void display2(int [], int);

int main() {
    int num[] = {24, 34, 12, 44, 56, 17};
    
    display1(&num[0], 6);
    display2(num, 6);
    
    return 0;
}

void display1(int *ptr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Element = %d\n", *ptr);
        ptr++;                                      // Increment pointer to point to next element.
    }

    printf("\n\n");
}

void display2(int ptr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Element = %d\n", ptr[i]);
    }
}