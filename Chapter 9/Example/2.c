// When a program is called by reference

#include<stdio.h>
void swap(int *, int *);
int main()
{
    int a=10, b=20;
    printf("a = %d b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d b = %d\n", a, b);
    return 0;
}

void swap(int *i, int *k) 
{ // What happened here is that the addresses of the variables a & b got assigned to *i & *k.
    int temp;
    temp=*i;
    *i=*k;
    *k=temp;
}