// Calculate SI for 3 sets of P, N and R
// Author = Rahul Date = 16/11/2023

#include <stdio.h>

int main () {
    // Initialize variables
    int p, n, count ;
    float r, si ;
    count = 1 ;
    
    while (count <= 3) {
        printf("Enter values of Principal, Number of Years & Rate: ") ;
        scanf("%d %d %f", &p, &n, &r) ;

        // SI Formula
        si = p * n * r / 100 ;
        
        printf("Simple Interest = %f\n", si) ;
        
        count = count + 1 ; // Loop Counter or Index Variable.
    }
    
    return 0 ;
}