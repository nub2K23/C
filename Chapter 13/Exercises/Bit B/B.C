#include <stdio.h>

void checkSymmetry(int arr[], int size);

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    checkSymmetry(arr, n);

    return 0;
}

void checkSymmetry(int arr[], int size) {
    int isSymmetric = 1;  // Assuming symmetry initially

    for (int i = 0, j = size - 1; i <= (size - 1) / 2; i++, j--) {
        if (arr[i] != arr[j]) {
            isSymmetric = 0;  // If elements are not equal, set isSymmetric to 0
            break;  // No need to continue checking
        }
    }

    if (isSymmetric) {
        printf("The array is symmetric.\n");
    } else {
        printf("The array is not symmetric.\n");
    }
}