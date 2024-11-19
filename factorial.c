#include <stdio.h>

// Recursive function to calculate factorial
long long factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    
    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking if the number is negative (Factorial is not defined for negative numbers)
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the factorial function and display the result
        printf("The factorial of %d is: %lld\n", number, factorial(number));
    }

    return 0;
}

// #include <stdio.h>

// // Recursive function to calculate factorial
// int factorial(int n) {  // Using int instead of long long
//     if (n == 0 || n == 1) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Calculate and display the factorial
//     printf("The factorial of %d is: %d\n", number, factorial(number));
    
//     return 0;
// }
