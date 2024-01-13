// Pointer Arithmetic
#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 45, 67, 56, 74};
    int i = 4, *j, *k, *x, *y;

    j = &i;
    j += 9;         // Pointer + Number
    k = &i;
    k += -3;        // Pointer - Number
    x = &arr[1];
    y = &arr[5];
    printf("%d\n", y - x);
    j = &arr[4];
    k = (arr + 4);
    
    if (j == k) {
        printf("The two pointers point to the same location\n");
    } else{
        printf("The two pointers point to different locations.\n");
    }

    return 0;
}