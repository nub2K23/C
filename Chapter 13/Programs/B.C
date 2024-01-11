// Demonstration of call by value & call by reference
#include <stdio.h>

void display1(int);
void display2(int *);
int main() {
    int i;
    
    int marks[] = {55, 65, 75, 56, 78, 78, 90};

    printf("\n\nCall by value using 'display1' function.\n");

    for (i = 0; i < 7; i++) {
        display1(marks[i]);
    }

    printf("\n\nCall by reference using 'display2' function.\n");
    
    for (i = 0; i < 7; i++) {
        display2(&marks[i]);
    }

    return 0;
}

void display1(int m) {
    printf("%d ", m);
}

void display2(int *k) {
    printf("%d ", *k);
}