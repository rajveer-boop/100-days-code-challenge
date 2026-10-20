#include <stdio.h>

// Function to perform linear search
// Returns the index if found, otherwise returns -1
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Element found, return its index
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {23, 45, 12, 8, 90, 67};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    
    int result = linearSearch(arr, n, target);
    
    if (result != -1) {
        printf("Element %d found at index: %d\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    
    return 0;
}
