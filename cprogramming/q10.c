#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Function to calculate binomial coefficient nCk
int binomialCoefficient(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// Function to print Pascal's Triangle
void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print spaces for alignment
        for (int j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }

        // Print the values in the row
        for (int j = 0; j <= i; j++) {
            printf("%4d", binomialCoefficient(i, j));
        }

        printf("\n");
    }
}

int main() {
    int numRows;

    // Input the number of rows for Pascal's Triangle
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &numRows);

    // Print Pascal's Triangle
    printPascalsTriangle(numRows);

    return 0;
}
