#include <stdio.h>
int main() {
    int i=1;
    char j='A';
    float sigma=1.5;
    int *alpha; char *ch; float *s;
    alpha=&i; ch=&j; s=&sigma;
    printf("%d %d %d", (int)&i, (int)&j, (int)&sigma);
    return 0;
}