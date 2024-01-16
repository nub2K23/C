// Count how many times a number is repeating in an array of 10 integers.

#include <stdio.h>

int main() {
    int num, i, arr[] = {1, 2, 1, 5, 6, 7, 8, 10, 2, 2};
    int count;

    printf("Enter the number you to search: ");
    scanf("%d", &num);

    for (i = 0; i < 10; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    printf("The number %d has occured %d time(s) in the array.", num, count);

    return 0;
}