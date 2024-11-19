#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to find the next three primes greater than n
void next_three_primes(int n) {
    int count = 0;
    int next = n + 1;
    while (count < 3) {
        if (is_prime(next)) {
            printf("%d ", next);
            count++;
        }
        next++;
    }
    printf("\n");
}

// Function to find the previous two primes smaller than n
void previous_two_primes(int n) {
    int count = 0;
    int prev = n - 1;
    while (count < 2) {
        if (is_prime(prev)) {
            printf("%d ", prev);
            count++;
        }
        prev--;
    }
    printf("\n");
}

int main() {
    int number;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime
    if (is_prime(number)) {
        printf("The number %d is prime.\n", number);
        printf("The next three prime numbers are: ");
        next_three_primes(number);
    } else {
        printf("The number %d is not prime.\n", number);
        printf("The two prime numbers smaller than %d are: ", number);
        previous_two_primes(number);
    }

    return 0;
}
