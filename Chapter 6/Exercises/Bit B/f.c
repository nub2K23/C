// Print the census for every year
// Author = Rahul Date = 20/11/2023

#include<stdio.h>

int main()
{
    int i, pop = 100000;
    int newpop = pop; // Initialize newpop with the initial population
    
    printf("%d is the population of this year.\n", pop);

    for (i = 1; i <= 10; i++)
    {
        // Calculate the new population and then print it
        newpop = newpop - newpop * 10 / 100;
        printf("%d was the population of %d year(s) ago.\n", newpop, i);
    }
    
    return 0;
}