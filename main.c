#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    // Get user input
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate and display the factorial
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(number);
        printf("Factorial of %d is: %d\n", number, result);
    }

    return 0;
}
