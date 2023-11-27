#include <stdio.h>
int main()
{
    int a = 3, b = 4, c;
    c = b - a;
    switch (c)
    {
    case 1:
    case 2:
        printf("God give me a chance to change my things.\n");
        break;
    case 'a':
    case 'b':
        printf("God give me a chance to run my show.\n");
        break;
    }
    return 0;
}