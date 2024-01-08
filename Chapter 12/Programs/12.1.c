#include <stdio.h>

#define ISUPPER(x) (x >= 65 && x <= 90 ? 1 : 0)
#define ISLOWER(x) (x >= 97 && x <= 122 ? 1 : 0)
#define ISALPHA(x) (ISUPPER(x) || ISLOWER(x))
#define BIG(x, y) (x > y ? x : y)

int main() {
    char ch;
    int d, a, b;
    
    printf("\nEnter any alphabet/character: ");
    scanf("%c", &ch);
    
    if ( ISLOWER(ch) == 1 ) {
        printf("You entered a small case letter.\n");
    } 
    if ( ISUPPER(ch) == 1 ) {
        printf("You entered a captial letter.\n");
    }
    if ( ISALPHA(ch) != 1 ) {
        printf("You entered a character other than a letter.\n");
    }
    
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    
    d = BIG(a, b);
    
    printf("The bigger number is: %d", d);
    
    return 0;
}