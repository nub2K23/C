// Menu driven Arithmetic calculator.

#include <stdio.h>

void add(int, int);
void sub(int, int);
void multiply(int, int);
void divide(int, int);

int main() {
    int num1, num2;
    int choice;

    do {
        printf("1. Addition.\n");
        printf("2. Subtraction.\n");
        printf("3. Multiplication.\n");
        printf("4. Division.\n");
        printf("5. Quit Program.\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter the numbers: ");
                scanf("%d %d", &num1, &num2);
                add(num1, num2);
                break;

            case 2:
                printf("Enter the numbers: ");
                scanf("%d %d", &num1, &num2);
                sub(num1, num2);
                break;

            case 3:
                printf("Enter the numbers: ");
                scanf("%d %d", &num1, &num2);
                multiply(num1, num2);
                break;

            case 4:
                printf("Enter the numbers: ");
                scanf("%d %d", &num1, &num2);
                divide(num1, num2);
                break;

            case 5:
                break;

            default:
                printf("\n\nInvalid choice. Please enter correct option.\n\n");
                break;
        }
    } while (choice != 5);

    return 0;
}

void add(int a, int b) {
    int c = a + b;
    printf("Result = %d\n\n", c);
}
void sub(int a, int b) {
    int c = a - b;
    printf("Result = %d\n\n", c);
}
void multiply(int a, int b) {
    int c = a * b;
    printf("Result = %d\n\n", c);
}

void divide(int a, int b) {
    int c = a / b;
    printf("Result = %d\n\n", c);
}