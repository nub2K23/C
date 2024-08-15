// Calculate to CMYK from RGB values
// Author = Rahul Date = 15/11/2023

#include <stdio.h>
#include <math.h>

int main () {
    int red, green, blue;

    // Input RGB values
    printf("Enter RGB values (0 to 255):\n");
    printf("Red: ");
    scanf("%d", &red);
    
    printf("Green: ");
    scanf("%d", &green);
    
    printf("Blue: ");
    scanf("%d", &blue);

    // Convert RGB to CMYK using the formulae
    float white = fmax(fmax(red / 255.0, green / 255.0), blue / 255.0);
    float cyan, magenta, yellow, black;

    if (white == 0) {
        cyan = magenta = yellow = 0;
        black = 1;
    } else {
        cyan = (white - red / 255.0) / white;
        magenta = (white - green / 255.0) / white;
        yellow = (white - blue / 255.0) / white;
        black = 1 - white;
    }

    // Output CMYK values
    printf("CMYK values:\n");
    printf("Cyan: %.4f\n", cyan);
    printf("Magenta: %.4f\n", magenta);
    printf("Yellow: %.4f\n", yellow);
    printf("Black: %.4f\n", black);

    return 0;
}
