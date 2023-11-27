#include<stdio.h>
void fun(int);
int main()
{
    int a = 30;
    fun (a);
    printf("%d", a);
    return 0;
}

void fun(int b)
{
    b = 60;
    printf("%d\n", b);
}

// This happens because copies of actual arguements are passed as formal arguements to the called function.
