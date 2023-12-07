#include<stdio.h>
int main() {
    int i=3, *j;
    j=&i;
    printf("Address of i is %u\n", &i);
    printf("Address of i is %u\n", j);
    printf("Address of j is %u\n", &j);
    printf("Value of j is %u\n", *j);
    printf("Value of j is %d\n", *j); // *j = *(&i)
    return 0;
}