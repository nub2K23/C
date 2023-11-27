// Loop a program till user wants using for loop
// Author = Rahul Date = 18/11/2023

#include <stdio.h>

int main()
{
    int num;
    char choice, choiceIn;
    
    // Assign default value of 'y' to choice. Then execute the condition. Take User Input of 'choiceIn' and assign to choice.
    // This step ensure that the program runs atleast once.
    for (choice = 'y' ; choice == 'y' || choice == 'Y'; choice = choiceIn )
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("Square of %d is %d.\n", num, num * num);
        printf("Want to add another number? (Y/n): ");
        scanf(" %c", &choiceIn);
    }
    return 0;
}