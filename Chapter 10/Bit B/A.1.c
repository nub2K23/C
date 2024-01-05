// Binary Conversion Program using non recursive function. 

#include <stdio.h>
void decimalToBinary(int);

int main() {
    int decimal;

    // printf("Enter a decimal number: ");
    // scanf("%d", &decimal);
    for (int i = 0; i < 26; i++) {
        decimalToBinary(i);
    }

    return 0;
}

void decimalToBinary(int decimal) {
    int binary[32]; // Assuming 32-bit integer
    int i = 0;

    int temp = decimal;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary representation of %d: ", temp);
    
    // Printing the binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");
}
