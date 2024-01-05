// Rewrite the following program using conditional operators
// Authors = Rahul Date = 16//11/2023

#include <stdio.h>

int main () {
    float sal ;
    printf ("Enter the salary: ") ;
    scanf ("%f", &sal ) ;

    sal >= 25000 && sal <= 40000 ? printf ("Manager.") : ( sal >= 15000 && sal < 25000 ? printf ("Accountant") : printf ("Clerk") ) ;

    return 0 ;
}