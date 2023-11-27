#include <stdio.h>
int leap_year(int);
int main()
{
    int year = 2023;
    printf("Enter the year: ");
    scanf("%d", &year);
    leap_year(year);
    return 0;
}

int leap_year(int yr)
{
    if (yr%400==0||yr%4==0)
        printf("%d is a leap year.", yr);
    else
        printf("%d is not a leap year.", yr);
}