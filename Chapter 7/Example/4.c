#include <stdlib.h>
#include <stdio.h>

int main()
{
    int goal;
    printf("Enter the number of goals scored against India: ");
    scanf("%d", &goal);
    if (goal <= 5)
        goto sos;
    else
    {
        printf("About time soccer players learnt C\n");
        printf("and said goodbye to soccer.\n");
        exit (1); // Terminates the program. "(1)" points to the location where the execution of the program got terminated.
    }

    sos :
        printf("To err is to human.\n");
    return 0;
}