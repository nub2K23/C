// Program that shows numbers and counts if positve, negative or zero
// Author = Rahul Date = 17/11/2023

#include <stdio.h>

int main()
{
    int number, positiveCount = 0, negativeCount = 0, zeroCount = 0 ;
    char choice;

    while (1)
    {
        // User Input
        printf("Enter a number: ") ;
        scanf("%d", &number) ;

        // Increase count accordingly
        if (number < 0)
            negativeCount++ ;
        else if (number > 0)
            positiveCount++ ;
        else
            zeroCount++ ;
        
        // Ask for more User input
        printf("Do you want to add more numbers?") ;
        scanf(" %c", &choice) ;

        if (choice == 'y' || choice == 'Y')
            continue;
        else
            break;
    }
    printf("Positive numbers: %d\n", positiveCount) ;
    printf("Negative numbers: %d\n", negativeCount) ;
    printf("Zero Count: %d", zeroCount) ;

    return 0 ;
}