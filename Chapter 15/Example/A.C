/* Program to demonstrate printing of a string */
#include <stdio.h>
int main() {
    char name[] = "Klinsman";
    int i = 0;
    while (name[i] != '\0') {
        printf("%c", name[i]);
        i++;
    }
    printf("\n");
    return 0;
}