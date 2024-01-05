// Pointer-to-pointer integer

#include<stdio.h>
int main()
{
    float a = 3.14;
    float *b; float **c;
    b = &a;
    c = &b;
    printf("%p %p %p\n", &a, &b, &c);      
    printf("%p %p\n", b, c);
    printf("%f %f %f", a, *b, **c);
    return 0;
}