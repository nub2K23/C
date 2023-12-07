// When a program is called by value.

#include<stdio.h>
void swap(int, int);
int main() {
    int a, b;
    a=10; b=20;
    swap(a, b);
    printf("a = %d. b = %d", a, b);
    return 0;
}

void swap(int x, int y) {
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("x = %d. y = %d\n", x, y);
}