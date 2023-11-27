// Wrong code:
// #include <stdio.h>
// int main()
// {
//     int suite = 1;
//     switch (suit)
//     {
//     case 0;
//         printf("Club\n");    
//     case 1;
//         printf("Diamond\n");
//     }
//     return 0;
// }

// Correct Code:
#include <stdio.h>
int main()
{
    int suite = 1;
    switch (suite)
    {
    case 0:
        printf("Club\n");
    case 1:
        printf("Diamond\n");
    }
    return 0;
}