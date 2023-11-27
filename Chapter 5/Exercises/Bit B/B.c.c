// Matchstick Game where computer always wins.
// Author = Rahul Date = 17/11/2023

#include <stdio.h>

int main() 
{
    int matchsticks = 21;
    int userPick, computerPick;

    printf("Welcome to the Matchstick Game!\n");

    while (matchsticks > 0) 
    {
        // User's turn
        printf("There are %d matchsticks. Enter 1, 2, 3, or 4 to pick: ", matchsticks);
        scanf("%d", &userPick);

        // Validate user input
        if (userPick < 1 || userPick > 4 || userPick > matchsticks) 
        {
            printf("Invalid input. Please pick 1, 2, 3, or 4 matchsticks.\n");
            continue; // Restart the loop for a valid input
        }

        // Update matchsticks after user's pick
        matchsticks -= userPick;
        printf("User picked %d matchstick(s). %d matchstick(s) remaining.\n", userPick, matchsticks);

        // Check if the user has picked the last matchstick
        if (matchsticks == 0) 
        {
            printf("Computer wins! User picked the last matchstick.\n");
            break;
        }

        // Computer's turn
        computerPick = 5 - userPick; // The computer always picks in such a way that the sum is 5
        matchsticks -= computerPick;
        printf("Computer picked %d matchstick(s). %d matchstick(s) remaining.\n", computerPick, matchsticks);

        // Check if the computer has picked the last matchstick
        if (matchsticks == 0) 
        {
            printf("User wins! Computer picked the last matchstick.\n");
            break;
        }
    }

    return 0;
}
