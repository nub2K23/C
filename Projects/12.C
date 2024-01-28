#include <stdio.h>

void printEven(int [], int);                    // Print only even elements of the array.
void printOdd(int [], int);                     // Print only odd elements of the array.
void calculateSumAndAvg(int [], int);           // Print the avg. and sum of the array.
void findMinMax(int [], int);                   // Print the minimum and maximum value of the array.
void removeDuplicates(int [], int *);           // Remove any duplicate elements from the array.
void reverseArray(int [], int);                 // Print the elements of the array in reverse order.  

int main() {
    int size, choice;

    printf("Enter the size of the Array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of Array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\nMenu:\n\n");
        printf("2. Print odd-valued elements.\n");
        printf("1. Print even-valued elements.\n");
        printf("3. Calculate the Sum & Avg. of the array.\n");
        printf("4. Print the Minimum and Maximum value.\n");
        printf("5. Remove duplicate elements from the Array.\n");
        printf("6. Print the elements of the array in reverse order.\n");
        printf("7. Re-enter the Array.\n");
        printf("8. Quit.\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printEven(arr, size);
                break;

            case 2:
                printOdd(arr, size);
                break;

            case 3:
                calculateSumAndAvg(arr, size);
                break;

            case 4:
                findMinMax(arr, size);
                break;

            case 5:
                removeDuplicates(arr, &size);
                printf("Duplicates removed!\n");
                break;

            case 6:
                reverseArray(arr, size);
                break;

            case 7:
                printf("Enter the size of the Array: ");
                scanf("%d", &size);

                printf("Enter the elements of Array: ");
                for (int i = 0; i < size; i++) {
                    scanf("%d", &arr[i]);
                }
                break;

            case 8:
                printf("Quitting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 8);

    return 0;
}

void printEven(int arr[], int size) {
    printf("Even-valued elements: ");
    for (int j = 0; j < size; j++) {
        if (arr[j] % 2 == 0) {
            printf("%d ", arr[j]);
        }
    }
    printf("\n");
}

void printOdd(int arr[], int size) {
    printf("Odd-valued elements: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void calculateSumAndAvg(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float avg = (float)sum / size;
    printf("Average = %.2f, Sum = %d\n", avg, sum);
}

void findMinMax(int arr[], int size) {
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum Value = %d\n", max);
    printf("Minimum Value = %d\n", min);
}

void removeDuplicates(int arr[], int *size) {
    for (int i = 0; i < *size; i++) {
        for (int j = i + 1; j < *size;) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < *size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                (*size)--;
            } else {
                j++;
            }
        }
    }
}

void reverseArray(int arr[], int size) {
    printf("Array in reverse order: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int menu() {

}