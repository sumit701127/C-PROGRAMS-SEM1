#include <stdio.h>

// Function for addition
int add(int a, int b) {
    return a + b;
}

// Function for subtraction
int subtract(int a, int b) {
    return a - b;
}

// Function for division
float divide(int a, int b) {
    if (b == 0) {
        printf("Error! Division by zero is not allowed.\n");
        return -1; // Return a special error value
    }
    return (float)a / b;
}

// Function for multiplication
int multiply(int a, int b) {
    return a * b;
}

// Function for remainder (modulus)
int remainder(int a, int b) {
    if (b == 0) {
        printf("Error! Division by zero is not allowed.\n");
        return -1; // Return a special error value
    }
    return a % b;
}

int main() {
    int choice, num1, num2;
    float result;

    while (1) {
        // Menu of operations
        printf("\nEnter an option:\n");
        printf("Press 1 for Addition\n");
        printf("Press 2 for Subtraction\n");
        printf("Press 3 for Division\n");
        printf("Press 4 for Multiplication\n");
        printf("Press 5 for Remainder\n");
        printf("Press 6 for Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // If the user selects Exit, break the loop
        if (choice == 6) {
            printf("Exiting the calculator.\n");
            break;
        }

        // Ask the user for two integers
        printf("Enter the first integer: ");
        scanf("%d", &num1);
        printf("Enter the second integer: ");
        scanf("%d", &num2);

        // Perform the selected operation
        switch (choice) {
            case 1: 
                printf("Result of addition: %d\n", add(num1, num2));
                break;
            case 2: 
                printf("Result of subtraction: %d\n", subtract(num1, num2));
                break;
            case 3: 
                result = divide(num1, num2);
                if (result != -1) {
                    printf("Result of division: %.2f\n", result);
                }
                break;
            case 4: 
                printf("Result of multiplication: %d\n", multiply(num1, num2));
                break;
            case 5: 
                result = remainder(num1, num2);
                if (result != -1) {
                    printf("Result of remainder: %d\n", (int)result);
                }
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 6.\n");
        }
    }

    return 0;
}
