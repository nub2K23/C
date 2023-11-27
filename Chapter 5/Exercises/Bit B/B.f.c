// Find the range of a set of numbers entered through the keyboard
// Author = Rahul Date = 17/11/2023

#include <stdio.h>

int main() {
    int n, num, smallest, largest, i;

    // Input the number of elements in the set
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);

    // Check if there are elements in the set
    if (n <= 0) 
    {
        printf("Invalid input. Please enter a positive number of elements.\n");
        return 1;  // Exit the program with an error code
    }

    // Initialize loop counter
    i = 1;

    // Input the first number
    printf("Enter number %d: ", i);
    scanf("%d", &num);

    // Assume the first number is both the smallest and largest
    smallest = largest = num;

    // Input the rest of the numbers and find the smallest and largest using a while loop
    while (i < n)
    {
        i++;
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Update smallest and largest if necessary
        if (num < smallest) 
            smallest = num;
        else if (num > largest) 
            largest = num;
        
    }

    // Calculate and display the range
    int range = largest - smallest;
    printf("The range of the set is: %d\n", range);

    return 0;
}
