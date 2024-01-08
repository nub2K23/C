#include <stdio.h>
#include "12.2.H"

int main() {
    float side1, side2, side3, side, p_tri, p_cir, p_sqr, a_tri, a_cir, a_sqr;  
    float r, base, height;
    
    printf("\nEnter radius of circle: ");
    scanf("%f", &r);
    
    p_cir = PERIC(r);
    printf("The perimeter of the circle is %.2f units.\n", p_cir);
    
    a_cir = AERAC(r);
    printf("The area of the circle is %.2f sq. units.\n", a_cir);

    printf("\n\nEnter side of the square: ");
    scanf("%f", &side);
    
    p_sqr = PERIS(side);
    printf("Perimeter of the square is %.2f units.\n", p_sqr);

    a_sqr = AREAS(side);
    printf("AREA of the square is %.2f sq. units.\n", a_sqr);

    printf("\n\nEnter side of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);
    
    p_tri = PERIT(side1, side2, side3);
    printf("Perimeter of the triangle is %.2f units.\n", p_tri);
    
    printf("\n\nEnter base and height of triagnle: ");
    scanf("%f %f", &base, &height);
    
    a_tri = AREAT(base, height);
    printf("Area of the triangle is %.2f sq. units.\n", a_tri);

    return 0;
}