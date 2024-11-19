#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;  // Store the value pointed to by a in temp
    *a = *b;        // Assign the value pointed to by b to the location a points to
    *b = temp;      // Assign the stored value in temp to the location b points to
}

int main() {
    int num1, num2;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Displaying the values before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Calling the swap function
    swap(&num1, &num2);

    // Displaying the values after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
