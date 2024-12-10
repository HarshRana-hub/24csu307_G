#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1, remainder;

    while (binary > 0) {
        remainder = binary % 10; // Extract the last digit
        decimal += remainder * base; // Add to the decimal value
        base *= 2; // Increase the base (powers of 2)
        binary /= 10; // Remove the last digit
    }

    return decimal;
}

// Function to convert decimal to binary
long long decimalToBinary(int decimal) {
    long long binary = 0;
    int remainder, base = 1;

    while (decimal > 0) {
        remainder = decimal % 2; // Get the remainder (0 or 1)
        binary += remainder * base; // Form the binary number
        base *= 10; // Increase the place value in binary (powers of 10)
        decimal /= 2; // Divide the number by 2
    }

    return binary;
}

int main() {
    int choice;
    printf("Choose an option:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        long long binary;
        printf("Enter a binary number: ");
        scanf("%lld", &binary);
        printf("The decimal equivalent is: %d\n", binaryToDecimal(binary));
    } else if (choice == 2) {
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        printf("The binary equivalent is: %lld\n", decimalToBinary(decimal));
    } else {
        printf("Invalid choice! Please choose 1 or 2.\n");
    }

    return 0;
}
