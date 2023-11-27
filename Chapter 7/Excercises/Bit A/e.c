#include <stdio.h>
int main()
{
    int ch = 'a' + 'b';
    switch (ch)
    {
        case 'a':
        case 'b':
            printf("Look at 10 ideas, 11th will occur to you.\n");
            break;
        case 'A':
            printf("If you have a good idea, project it.\n");
        case 'b' + 'a':
            printf("Have ideas, will fly.\n");
    }
    return 0;
}

    // Output:

    // Have ideas, will fly.