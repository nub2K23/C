// Creating a 'strcpy()' from scratch.
#include <stdio.h>
void xstrcpy(char *, char *);
int main() {
    char source[] = "NIGGA", target[20];
    xstrcpy(target, source);
    printf("Source String = %s\n", source);
    printf("Target String = %s\n", target);
    return 0;
}

void xstrcpy(char *t, char *s) {
    while (*s != '\0') {
        *t = *s;
        s++, t++;
    }
    *t = '\0';
}