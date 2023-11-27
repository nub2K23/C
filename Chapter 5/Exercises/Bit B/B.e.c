// Find the octal equivalent of an integer
// Author = Rahul Date = 17/11/2023

#include <stdio.h>

int main() {
    // Declare variables
    int num, ognum, remainder, octalNum = 0;
    int i = 1;

    // Take User input
    printf("Enter the number: ");
    scanf("%d", &num);
    ognum = num ;

    // Find the octal
    while (num > 0) {
        // Calculate remainder when dividing the number by 8
        remainder = num % 8;

        // Update octalNum by adding the remainder multiplied by the position value (i)
        octalNum += remainder * i;

        // Divide the number by 8 to move to the next digit
        num /= 8;

        // Multiply i by 10 to move to the next position in the octal number
        i *= 10;
    }

    // Print the result
    printf("Octal equivalent of %d = %d\n", ognum, octalNum);

    return 0;
}
