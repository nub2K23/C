#include <stdio.h>

// Function to merge two ordered arrays
void mergeArrays(int *, int, int *, int, int *);

int main() {
    int size1, size2;

    // Get the sizes of the arrays
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr1[size1], arr2[size2], result[size1 + size2];

    // Get elements of the first array
    printf("Enter elements of the first array in ascending order:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Get elements of the second array
    printf("Enter elements of the second array in ascending order:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the arrays
    mergeArrays(arr1, size1, arr2, size2, result);

    // Display the merged array
    printf("Merged array in ascending order:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    // Compare elements from both arrays and merge them in order
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    // If there are any remaining elements in the first array, add them
    while (i < size1) {
        result[k++] = arr1[i++];
    }

    // If there are any remaining elements in the second array, add them
    while (j < size2) {
        result[k++] = arr2[j++];
    }
}