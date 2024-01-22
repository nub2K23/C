// Find if a number is prime or not using a function.
#include <stdio.h>

void isPrime(int, int*);

int main() {
    int num;
    int count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    isPrime(num, &count);
    
    if (!count) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    printf("Prime numbers under 100 are: \n2\n");
    for (int n = 3; n < 100; n++) {
        count = 0;
        isPrime(n, &count);
        if (!count) {
            printf("%d\n", n);
        }
    }

    return 0;
}

void isPrime(int n, int *c) {
    int i;

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            (*c)++;
        }
    }
}