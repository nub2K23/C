//  #include <stdio.h>
//  int main() {
//       long float a = 25.345e454;
//       unsigned double b = 25;
//       printf("%lf %d\n", a, b);
//       return 0;
//  }

#include <stdio.h>

int main() {
    long double a = 25.345e454;
    unsigned int b = 25;
    printf("%Lf %d\n", a, b);
    return 0;
}