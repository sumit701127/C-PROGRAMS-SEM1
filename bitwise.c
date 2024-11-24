#include <stdio.h>

int main() {
    // Declaring two integers for bitwise operations
    int a = 5;    // In binary: 00000101
    int b = 3;    // In binary: 00000011

    // Bitwise AND (&)
    printf("a & b = %d\n", a & b); // Binary: 00000101 & 00000011 = 00000001 (1)

    // Bitwise OR (|):
    printf("a | b = %d\n", a | b); // Binary: 00000101 | 00000011 = 00000111 (7)

    // Bitwise XOR (^):
    printf("a ^ b = %d\n", a ^ b); // Binary: 00000101 ^ 00000011 = 00000110 (6)

    // Bitwise NOT (~) on a:
    printf("~a = %d\n", ~a); // Binary: ~00000101 = 11111010 (-6, due to two's complement representation)

    // Right Shift (>>):
    printf("a >> 1 = %d\n", a >> 1); // Binary: 00000101 >> 1 = 00000010 (2)

    // Left Shift (<<):
    printf("a << 1 = %d\n", a << 1); // Binary: 00000101 << 1 = 00001010 (10)

    return 0;
}
