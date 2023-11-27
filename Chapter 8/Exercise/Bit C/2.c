#include <stdio.h>

// Function prototypes
void print_factors(int);
int is_prime(int);

int main() {
    int num;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call to print factors
    print_factors(num);

    return 0;
}

// Function to print factors of a number
void print_factors(int x) {
    printf("Factors of %d: ", x);

    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            printf("%d ", i);

            // Check if the factor is prime
            if (is_prime(i)) {
                printf("(Prime) ");
            }
        }
    }

    printf("\n");
}

// Function to check if a number is prime
int is_prime(int y) {
    if (y < 2) {
        return 0; // Not prime
    }

    for (int i = 2; i * i <= y; i++) {
        if (y % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}