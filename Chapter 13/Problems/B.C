// Program to copy elements of an Array to another in reverse order.

#include <stdio.h>

int main() {
    int arr1[5], arr2[5], i, j;

    printf("Enter the elements of the 1st Array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Elements in original order: ");
    for (i = 0; i < 5; i++) {
        printf("%d\t", arr1[i]);
    }
    
    printf("\n\n");

    for (i = 0, j = 4; i < 5; i++, j--) {
        arr2[i] = arr1[j];
    }
    
    printf("Elements in reverse order: ");
    for (i = 0; i < 5; i++) {
        printf("%d\t", arr2[i]);
    }

    return 0;
}