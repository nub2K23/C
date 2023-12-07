// Calculate the area and perimeter of circle

#include <stdio.h>
void area_peri(int, float *, float *);
int main()
{
    int radius;
    float area, perimeter;
    printf("Enter radius of circle:");
    scanf("%d", &radius);
    area_peri(radius, &area, &perimeter);
    printf("Area = %.2f sq. units\n", area);
    printf("Perimeter = %.2f sq. units\n", perimeter);
    return 0;
}

void area_peri(int r, float *a, float *p)
{
    *a=3.14 * r * r;
    *p=2 * 3.14 * r;
}