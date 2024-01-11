// Program to store marks of 30 students in an array and find the avg mark obtained

#include <stdio.h>

int main() {
    int avg, sum = 0;
    int i;
    int marks[30];                          // Array Declaration
    
    for (i = 0; i < 30; i++) {
        printf("Enter marks: ");
        scanf("%d", &marks[i]);             // Store data in array
    }

    for (i = 0; i < 30; i++) {
        sum += marks[i];                    // Read data from an array
    }

    avg = sum / 30;
    
    printf("Average marks = %d\n", avg);
    
    return 0;
}