#include <stdio.h>
#include <string.h>

int isValidCreditCard(char cardNumber[]);

int main() {
    char creditCardNumber[17];  // Assuming a 16-digit credit card number

    // Taking the credit card number as input
    printf("Hey Rahul! Enter your credit card number (without spaces): ");
    scanf("%s", creditCardNumber);

    // Function to check if the credit card number is valid
    if (isValidCreditCard(creditCardNumber)) {
        printf("Woohoo! Your credit card is valid!\n");
    } else {
        printf("Oops! Something seems fishy with your credit card...\n");
    }

    return 0;
}

// Function to check if the credit card number is valid
int isValidCreditCard(char cardNumber[]) {
    int sum = 0;
    int digit;
    int count = 0;

    // Iterate over each character of the credit card number
    for (int i = strlen(cardNumber) - 1; i >= 0; i--) {
        digit = cardNumber[i] - '0';  // Convert character to integer

        // Every other digit starting from the rightmost, multiply by 2
        if (count % 2 == 0) {
            digit *= 2;

            // Subtract 9 from numbers larger than 10
            if (digit > 9) {
                digit -= 9;
            }
        }

        // Add up the digits
        sum += digit;

        count++;
    }

    // Check if the sum is divisible by 10
    return (sum % 10 == 0);
}