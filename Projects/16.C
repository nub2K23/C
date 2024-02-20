#include <stdio.h>
void area(int);
void circumference(int);
int main() { 
  int radius;
  printf("Enter the radius of the circle: \n");
  scanf("%d", &radius);
  area(radius);
  circumference(radius);
  return 0;
}

void area(int r) {
  printf("Area of the circle is: %.2f\n", 3.14 * r * r);
}

void circumference(int r) {
  printf("circumference of the circle is: %.2f\n", 2 * 3.14 * r);
}
