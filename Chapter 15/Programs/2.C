// Program to convert a string into int
#include <stdio.h>
#define AND &&
int main() {
    char str[12];
    int num = 0;
    printf("Enter a string of numbers: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 48 AND str[i] <= 57) {
            num = num * 10 + (str[i] - 48);
        } else {
            printf("Not a valid string.\n");
            return 1;
        }    
    }
    printf("The number is: %d\n", num);
    return 0;
}