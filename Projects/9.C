// Find factors of a number.
#include <stdio.h>

void factors(int);

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    factors(num);

    return 0;
}

void factors(int n) {
    int i;

    printf("Factors of %d are: 1 ", n);
    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
}