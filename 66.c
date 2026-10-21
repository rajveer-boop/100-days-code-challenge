#include <stdio.h>

// Function to insert an element into a sorted array
// Returns the new size of the array if successful, or -1 if the array is full
int insertSorted(int arr[], int size, int capacity, int element) {
    // 1. Check if the array has room for a new element
    if (size >= capacity) {
        return -1; 
    }

    int i = size - 1;

    // 2. Move elements that are greater than 'element' one position ahead
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    // 3. Insert the element at its correct position
    arr[i + 1] = element;

    // 4. Return the newly incremented size
    return size + 1;
}

int main() {
    // Array capacity is 10, but currently contains 5 elements
    int arr[10] = {10, 20, 30, 40, 50}; 
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int size = 5; 
    int element = 35;

    printf("Before insertion: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    size = insertSorted(arr, size, capacity, element);

    if (size != -1) {
        printf("After insertion:  ");
        for (int i = 0; i < size; i++) printf("%d ", arr[i]);
        printf("\n");
    } else {
        printf("Insertion failed: Array is full.\n");
    }

    return 0;
}
