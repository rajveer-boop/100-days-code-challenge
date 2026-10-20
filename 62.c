#include <stdio.h>

// Function to reverse the array in place
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    
    while (start < end) {
        // Swap elements using a temporary variable
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move pointers towards the center
        start++;
        end--;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    printArray(arr, n);
    
    reverseArray(arr, n);
    
    printf("Reversed array: ");
    printArray(arr, n);
    
    return 0;
}
