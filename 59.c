#include <stdio.h>

int main() {
    int arr[] = {12, 5, 8, 23, 7, 4, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int even_count = 0;
    int odd_count = 0;
    
    // Traverse the array and check each element
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    // Print the results
    printf("Even numbers count: %d\n", even_count);
    printf("Odd numbers count: %d\n", odd_count);
    
    return 0;
}
