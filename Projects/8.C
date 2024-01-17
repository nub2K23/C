// Find if a number is prime or not using a function.
#include <stdio.h>

void isPrime(int);

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    isPrime(num);

    printf("Prime numbers under 100 are: 2\n");
    for (int n = 3; n < 100; n++) {
        isPrime(n);
    }

    return 0;
}

void isPrime(int n) {
    int i, count = 0;

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (!count) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
}