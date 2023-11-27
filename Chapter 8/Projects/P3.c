// Write a program in C to swap two numbers using a function

#include <stdio.h>
int swap(int *, int *);// This is the function prototype declaration
int main()// This is the main program block
{
    int n1, n2;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &n1, &n2); // scanf takes user input
    printf("Before swapping: n1 = %d and n2 = %d\n", n1, n2);
    swap(&n1, &n2); // Mun function ta ethi call karili.
    printf("After swapping: n1 = %d and n2 = %d\n", n1, n2);
    return 0;
}// Main program ends here.

int swap(int *a, int *b) // Function SWAP defintion block
{
    int temp;       // This is the initialization of temp variable.
    temp = *a;      // This assigns value of a in temp
    *a = *b;        // This assigns value of b to a.
    *b = temp;      // This assigns value of a to a.
}