// Print all Pythagorean Triplets with sides <= 30.
// Author = Rahul Date = 20/11/2023

#include <stdio.h>

int main()
{
    int a, b, c, pytriplet;
    
    for (a = 1; a <= 30; a++)
    {
        for (b = 1; b <= 30; b++)
        {
            for (c = 1; c <= 30; c++)
            {
                pytriplet = c * c;
                
                if (pytriplet == b * b + a * a)
                    printf("%d %d %d\n", a, b, c);
            }
        }
    }

    return 0;
}