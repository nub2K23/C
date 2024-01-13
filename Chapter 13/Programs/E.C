#include <stdio.h>
int main() {
    int num[] = {24, 34, 12, 44, 56, 17};

    int i, *ptr;
    ptr = &num[0];          // Assign address of 0eth element
    
    for (i = 0; i <= 5; i++) {
        printf("Address = %u, Element = %d\n", ptr, *ptr);
        ptr++;              //Increment pointer to point to the next element;
    }

    return 0;
}