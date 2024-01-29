// Passing individual structure elements.
#include <stdio.h>

struct book
{
    char name[25];
    char author[25];
    int pages;
};

void dis1(char *, char *, int);
void dis2(struct book);
void dis3(struct book *);

int main()
{
    struct book b1 = {"GAY NIGGA SEX", "RANDI", 69420};
    dis1(b1.name, b1.author, b1.pages);
    dis2(b1);
    dis3(&b1);
    return 0;
}

void dis1(char *n, char *a, int pg)
{
    printf("%s, %s, %d\n", n, a, pg);
}

void dis2(struct book b)
{
    printf("%s, %s, %d\n", b.name, b.author, b.pages);
}

void dis3(struct book *bookpointer)
{
    printf("%s, %s, %d\n", bookpointer->name, bookpointer->author, bookpointer->pages);
}