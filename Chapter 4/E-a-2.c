// To check whether the entered alphabet is special symbol or not.
// Author = Rahul Date = 16/11/2023

#include <stdio.h>

int main () {
    char ch ;
    printf("Enter the character: ") ;
    scanf("%c", &ch ) ;

    // Compare to ASCII & output result
    if ( (ch >= 0 && ch < 48 ) || ( ch > 57 && ch < 65 ) || ( ch > 90 && ch < 97 ) || ( ch > 122 && ch < 128 ) ) {
        printf("The character is a special symbol.") ;
    } else {
        printf("The character is not a special symbol.") ;
    }
    return 0 ;
}