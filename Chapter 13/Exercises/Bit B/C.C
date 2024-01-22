#include <stdio.h>

int smallnum(int *arr, int);

int main() {
    int arr[25];

    printf("Enter the elements: ");
    for (int i = 0; i < 25; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = smallnum(arr, 25);

    printf("The smallest element of the array is: %d", smallest);

    return 0;
}

int smallnum(int *arr, int size) {
    int *ptr = arr;
    int small = *ptr;

    for (int i = 0; i < size; i++) {
        if (*(ptr + i) > small) {
            small = *(ptr + i);
        }
    }

    return small;
}