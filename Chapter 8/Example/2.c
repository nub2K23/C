#include<stdio.h>
void brazil();
void italy();
void argentina();
int main()
{
    printf("I am in main.\n");
    italy();
    brazil();
    argentina();
    return 0;
}

void italy()
{
    printf("I am in Italy!\n");
}
void brazil()
{
    printf("I am in Brazil!\n");
}
void argentina()
{
    printf("I am in Argentina!\n");
}