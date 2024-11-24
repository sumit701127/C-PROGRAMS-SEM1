#include <stdio.h>

// Recursive function to find the nth Fibonacci number
int fib(int n) {
    if (n == 0) {
        return 0;  // Base case: Fibonacci of 0 is 0
    } else if (n == 1) {
        return 1;  // Base case: Fibonacci of 1 is 1
    } else {
        return fib(n - 1) + fib(n - 2);  // Recursive case
    }
}

int main() {
    int n;

    // Taking input from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display Fibonacci series up to the nth term
    printf("Fibonacci Series up to %d terms: ", n);

    for (int i = 0; i < n; i++) {
        printf("%d ", fib(i));  // Print each Fibonacci number
    }

    printf("\n");

    return 0;
}
