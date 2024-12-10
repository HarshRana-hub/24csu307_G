#include <stdio.h>

// Function to check if a number is a perfect number
int isPerfectNumber(int num) {
    int sum = 0;

    // Find all divisors of num and calculate their sum
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors equals the number
    return sum == num;
}

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is a perfect number
    if (isPerfectNumber(number)) {
        printf("%d is a Perfect Number.\n", number);
    } else {
        printf("%d is not a Perfect Number.\n", number);
    }

    return 0;
}
