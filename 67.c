#include <stdio.h>

// Function to insert an element at a specific index
// Returns the new size of the array if successful, or -1 if insertion is invalid
int insertAtPosition(int arr[], int size, int capacity, int element, int index) {
    // 1. Check if array is full or if the index is out of bounds
    if (size >= capacity || index < 0 || index > size) {
        return -1; 
    }

    // 2. Shift elements from the end of the array down to the target index
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    // 3. Place the new element at the specified index
    arr[index] = element;

    // 4. Return the new size
    return size + 1;
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50}; // Capacity 10, current size 5
    int capacity = 10;
    int size = 5;
    int element = 99;
    int index = 2; // Insert 99 at index 2 (between 20 and 30)

    printf("Original array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    size = insertAtPosition(arr, size, capacity, element, index);

    if (size != -1) {
        printf("Modified array: ");
        for (int i = 0; i < size; i++) printf("%d ", arr[i]);
        printf("\n");
    } else {
        printf("Insertion failed: Array full or invalid index.\n");
    }

    return 0;
}
