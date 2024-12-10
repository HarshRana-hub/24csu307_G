#include <stdio.h>

// Method 1: Using a third variable
void swapUsingTemp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Method 2: Using arithmetic operations
void swapUsingArithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// Method 3: Using bitwise XOR
void swapUsingXOR(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

// Method 4: Using a function call
void swapUsingFunctionCall(int a, int b) {
    printf("After swapping using function call: a = %d, b = %d\n", b, a);
}

int main() {
    int x, y;

    // Input two integers
    printf("Enter the first integer (x): ");
    scanf("%d", &x);

    printf("Enter the second integer (y): ");
    scanf("%d", &y);

    // Swap using a third variable
    printf("\nMethod 1: Using a third variable\n");
    int a1 = x, b1 = y;
    swapUsingTemp(&a1, &b1);
    printf("After swapping: a = %d, b = %d\n", a1, b1);

    // Swap using arithmetic operations
    printf("\nMethod 2: Using arithmetic operations\n");
    int a2 = x, b2 = y;
    swapUsingArithmetic(&a2, &b2);
    printf("After swapping: a = %d, b = %d\n", a2, b2);

    // Swap using XOR
    printf("\nMethod 3: Using XOR\n");
    int a3 = x, b3 = y;
    swapUsingXOR(&a3, &b3);
    printf("After swapping: a = %d, b = %d\n", a3, b3);

    // Swap using function call
    printf("\nMethod 4: Using a function call\n");
    swapUsingFunctionCall(x, y);

    return 0;
}
