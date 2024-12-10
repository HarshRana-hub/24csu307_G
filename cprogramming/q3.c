#include <stdio.h>

// Function to subtract two integers using bitwise operators
int subtract(int a, int b) {
    // Subtract b from a using the concept of two's complement
    return a + (~b + 1);
}

int main() {
    int x, y, result;

    // Input two integers
    printf("Enter the first integer (x): ");
    scanf("%d", &x);

    printf("Enter the second integer (y): ");
    scanf("%d", &y);

    // Perform subtraction
    result = subtract(x, y);

    // Output the result
    printf("The result of %d - %d is: %d\n", x, y, result);

    return 0;
}
