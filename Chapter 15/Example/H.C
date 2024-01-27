#include <stdio.h>
#include <string.h>
int main() {
    char source[] = "Folks!", target[30] = "Hello";
    strcat(target, source);
    printf("Source string = %s\n", source);
    printf("Target string = %s\n", target);
    return 0;
}