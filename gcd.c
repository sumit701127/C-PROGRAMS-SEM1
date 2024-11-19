#include <stdio.h>
#include <stdlib.h>  // For abs() function

// Function to find GCD using the Euclidean algorithm
int gcd(int a, int b) {
    // Ensure a and b are positive using absolute values
    a = abs(a);
    b = abs(b);
    
    // Euclidean algorithm for GCD
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate and display the GCD
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
