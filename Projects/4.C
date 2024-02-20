// Program to reverse a number.

#include <stdio.h>

int main() {
    int num, temp, rnum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    int ognum = num;
    while (num > 0) {
        temp = num % 10;
        rnum = rnum * 10 + temp;
        num /= 10;
    }
    printf("Original Number: %d\nReverse Number: %d\n", ognum, rnum);
    return 0;
}