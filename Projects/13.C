#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <text>\n", argv[0]);
        return 1;
    }

    char *text = argv[1];
    int count[26] = {0}; // Assuming only English alphabets

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            count[text[i] - 'a']++;
        }
        else if (text[i] >= 'A' && text[i] <= 'Z')
        {
            count[text[i] - 'A']++;
        }
    }

    printf("Alphabet\tOccurrences\n");
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c\t\t%d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}