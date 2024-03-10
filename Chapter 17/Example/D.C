// Copying of structure elements.
#include <stdio.h>
#include <string.h>
int main() {
    struct employee {
        char name[10];
        int age;
        float salary;
    };
    struct employee e1 = {"Sana", 30, 5500.00};
    struct employee e2, e3;
    
    // Piece-meal copying.
    strcpy(e2.name, e1.name); // Using strcpy() because name is a string.
    e2.age = e1.age;          // Copying each each individual element of the variable 'e1' to 'e2'.
    e2.salary = e1.salary;
    
    // Copying all elements at one go.
    e3 = e2;
    
    printf("%s %d %f\n", e1.name, e1.age, e1.salary);
    printf("%s %d %f\n", e2.name, e2.age, e2.salary);
    printf("%s %d %f\n", e3.name, e3.age, e3.salary);
    
    return 0;
}