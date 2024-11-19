#include <stdio.h>

int main() {
    int num1, num2, difference;

    // Take input from the user
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Using the conditional operator to find the absolute difference
    difference = (num1 > num2) ? (num1 - num2) : (num2 - num1);

    // Display the difference
    printf("The difference between %d and %d is: %d\n", num1, num2, difference);

    return 0;
}
