#include<stdio.h>
#include<stdlib.h>

int main() {
    int clas, sub;
    
    // Infinite loop to keep the program running until the user chooses to exit.
    while(1) 
    {
        printf("Enter the clas obtained by the student from 1 - 3: \n");
        printf("Enter '4' to exit the program.\nClass: ");
        scanf("%d", &clas);
        
        // Switch statement to handle different cases based on the entered clas.
        switch (clas) 
        {
            case 1:
                printf("Enter the number of subject(s) failed: ");
                scanf("%d", &sub);
                // Check if the number of failed subjects is greater than 3.
                if (sub > 3) 
                {
                    printf("No grace marks for the student.\n\n");
                    break;
                }
                printf("%d marks is graced to the student.\n\n", sub * 5);                    
                break;
            case 2:
                printf("Enter the number of subject(s) failed: ");
                scanf("%d", &sub);
                // Check if the number of failed subjects is greater than 2.
                if (sub > 2) 
                {
                    printf("No grace marks for the student.\n\n");
                    break;
                }
                printf("%d marks is graced to the student.\n\n", sub * 5);
                break;
            case 3:
                printf("Enter the number of subject(s) failed: ");
                scanf("%d", &sub);
                // Check if the number of failed subjects is greater than 1.
                if (sub > 1)
                {    
                    printf("No grace marks for the student.\n\n");
                    break;
                }
                printf("%d marks is graced to the student.\n\n", sub * 5);          
                break;
            case 4:
                // Exit the program if the user enters '4'.
                exit(0);
            default:
                // Inform the user if an invalid class is entered.
                printf("Please enter a valid class!!\n\n");
        }
    }

    return 0;
}