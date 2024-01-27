// Generate Fibonacci words of order 0 through 5.
#include <stdio.h>
#include <string.h>
int main() {
    char str[50];
    char lastbutoneterm[50] = "A";
    char lastterm[50] = "B";
    int i;
    for (i = 1; i <= 5; i++) {
        strcpy(str, lastterm);
        strcpy(str, lastbutoneterm);
        printf("%s\n", str);
        strcpy(lastbutoneterm, lastterm);
        strcpy(lastterm, str);
    }
    return 0;
}