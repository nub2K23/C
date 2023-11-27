// Execution of a loop for an unknown number of times.

#include <stdio.h>

int main()
{
    int num;
    char choice;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("Square of %d is %d.\n", num, num * num);
        printf("Want to enter another number (Y/n): ");
        fflush(stdin);
        scanf("%c", &choice);
    } while (choice == 'Y' || choice == 'y');
    return 0;
}