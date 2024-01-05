// Binary conversion using a recursive program

#include <stdio.h>

int convertBinary(int);
int main() {
    int num, biNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    biNum = convertBinary(num);

    printf("Binary of %d is: %d", num, biNum);

    return 0;
}

int convertBinary(int n) {
    int remainder, binary;

    if (n == 0) {
        return remainder *= 10;
    } else {
        remainder = n % 2;
        binary = binary * 10 + remainder; 
        convertBinary(n / 2);
    }
}