#include <stdio.h>

int main() {
    char ch;

    // Accept a character input from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Print the corresponding ASCII value of the entered character
    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}
