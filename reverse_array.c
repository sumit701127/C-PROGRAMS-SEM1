#include <stdio.h>

// Function to reverse the array
void reverse_array(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    
    // Swap elements from start to end until the two pointers meet
    while (start < end) {
        // Swap arr[start] with arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move the pointers towards the center
        start++;
        end--;
    }
}

// Function to print the array
// void print_array(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

int main() {
    int n;

    // Taking input for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Taking input for the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        printf(arry[i]);
    }

    // Display the original array
    // printf("Original array: ");
    // print_array(arr, n);

    // Reverse the array
    reverse_array(arr, n);

    // Display the reversed array
    printf("Reversed array: ");
    print_array(arr, n);

    return 0;
}
