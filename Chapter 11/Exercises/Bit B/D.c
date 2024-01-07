//  #include <stdio.h>
//  static int y;
//  int main() {
//      static int z;
//      printf("%d %d\n", y, z);
//      return 0;
//  }


#include <stdio.h>

static int y;

int main() {
    static int z;
    printf("%d %d", y, z);
    return 0;
}