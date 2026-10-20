#include <stdio.h>

int main() {
    int arr[] = {4, 2, 9, 1, 7};
    // Calculate the total number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    // Initialize max and min with the first element
    int max = arr[0];
    int min = arr[0];
    
    // Traverse the array from the second element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    // Print the results
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    
    return 0;
}
