#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to calculate the binomial coefficient C(n, k)
int binomialCoefficient(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int n = 6; // You can change the value of 'n' to print Pascal's Triangle for a different number of rows

    // Iterate through each row of Pascal's Triangle
    for (int i = 0; i < n; i++) {
        // Print spaces for alignment
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Calculate and print the elements in each row
        for (int j = 0; j <= i; j++) {
            printf("%d ", binomialCoefficient(i, j));
        }

        printf("\n");
    }

    return 0;
}
