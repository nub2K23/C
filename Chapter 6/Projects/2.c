// Loop a program till user wants using while loop
// Author = Rahul Date = 18/11/2023

#include <stdio.h>

int main()
{
    int num;
    char choice = 'y'; // Assign the default value of y to ensure program runs atleast once.
    while (choice == 'Y' || choice == 'y')
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("Square of %d is %d.\n", num, num * num);
        printf("Want to enter another number (Y/n): ");
        fflush(stdin);
        scanf("%c", &choice);
    }
    return 0;
}