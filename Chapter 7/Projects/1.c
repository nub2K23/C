// Putting a switch inside a while loop
// Author = Rahul Date = 23/11/2023

#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 11)
    {
        switch (i)
        {
            case 1 :
                printf("I am in case 1 \n\n");
                break;
            case 2 :
                printf("I am in case 2 \n\n");
                break;
            case 3 :
                printf("I am in case 3 \n\n");
                break;
            case 4 :
                printf("I am in case 4 \n\n");
                break;
            case 5 :
                printf("I am in case 5 \n\n");
                break;
            case 6 :
                printf("I am in case 6 \n\n");
                break;
            case 7 :
                printf("I am in case 7 \n\n");
                break;
            case 8 :
                printf("I am in case 8 \n\n");
                break;
            case 9 :
                printf("I am in case 9 \n\n");
                break;
            case 10 :
                printf("I am in case 10 \n\n");
                break;
            default :
                printf("I am in default. \n\n") ;
        }
        i++ ;
    }

    return 0;
}