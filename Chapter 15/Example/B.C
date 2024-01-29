/* Another way to print strings */
#include <stdio.h>
int main()
{
    char name[] = "Klinsman";
    char *ptr;
    ptr = name; // Storing the base address of name[0] in 'ptr'.
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}