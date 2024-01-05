// To check whether the entered alphabet is lower case or not.
// Author = Rahul Date = 16/11/2023

#include <stdio.h>

int main () {
    char ch ;
    printf("Enter the alphabet: ") ;
    scanf("%c", &ch) ;

    // Compare the value of ASCII to the entered value
    if ( ch >= 97 && ch <= 122 ) {
        printf("The character is lower case.") ;
    } else {
        printf("The character is not lower case.") ;
    }
    return 0 ;
}