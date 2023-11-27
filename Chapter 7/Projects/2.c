#include <stdio.h>

int main()
{
    int i, j, k;
    int a; 
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            for (k = 1; k <= 3; k++)
            {
                if (i == 3 && j == 3 && k == 3) 
                {
                    a = 1;
                    break;
                }
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
    if (a == 1)
    {
        printf("Out of the loops at last.");
    }
    
    return 0;
}