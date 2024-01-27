#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char extstr(char *, int, int);
int main() {
    int pos, n, i;
    char str[20], newstr[20];
    char *source, *target;
    printf("\nEnter a string: ");
    scanf("%s", &str);
    printf("Enter the position and number of strings to extract: ");
    scanf("%d %d", &pos, &n);
    source = str, target = newstr;
    if (pos < 0 || pos > strlen(str)) {
        printf("Improper position value!\n");
        exit(1);
    }
    if (n < 0) {
        n = 0;
    }
    if (n > strlen(str)) {
        n -= strlen(str) - 1;
    }
    source += pos;
    for (i = 0; i < n; i++) {
        *target = *source;
        source++, target++;
    }
    *target = '\0';
    printf("The extracted string is: %s\n", newstr);
    return 0;
}