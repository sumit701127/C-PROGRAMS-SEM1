#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to validate PAN card number
int is_valid_pan(const char *pan) {
    // Check length is exactly 10 characters
    if (strlen(pan) != 10) {
        return 0;
    }

    // Check first three characters are uppercase letters
    for (int i = 0; i < 3; i++) {
        if (!isupper(pan[i])) {
            return 0;
        }
    }

    // Check next four characters are digits
    for (int i = 3; i < 7; i++) {
        if (!isdigit(pan[i])) {
            return 0;
        }
    }

    // Check last three characters are uppercase letters
    for (int i = 7; i < 10; i++) {
        if (!isupper(pan[i])) {
            return 0;
        }
    }

    return 1;  // PAN is valid
}

// Function to validate Aadhaar card number
int is_valid_aadhaar(const char *aadhaar) {
    // Check length is exactly 12 characters
    if (strlen(aadhaar) != 12) {
        return 0;
    }

    // Check if all characters are digits
    for (int i = 0; i < 12; i++) {
        if (!isdigit(aadhaar[i])) {
            return 0;
        }
    }

    return 1;  // Aadhaar is valid
}

int main() {
    char pan[11];     // PAN number input (max 10 characters + null terminator)
    char aadhaar[13]; // Aadhaar number input (max 12 characters + null terminator)

    // Accept PAN number from user
    printf("Enter your PAN card number (10 characters): ");
    scanf("%s", pan);

    // Accept Aadhaar number from user
    printf("Enter your Aadhaar card number (12 digits): ");
    scanf("%s", aadhaar);

    // Validate PAN number
    if (is_valid_pan(pan)) {
        printf("PAN card number is in correct format.\n");
    } else {
        printf("PAN card number is in incorrect format.\n");
    }

    // Validate Aadhaar number
    if (is_valid_aadhaar(aadhaar)) {
        printf("Aadhaar card number is in correct format.\n");
    } else {
        printf("Aadhaar card number is in incorrect format.\n");
    }

    return 0;
}
