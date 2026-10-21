#include <stdio.h>

// Function to delete an element by value
// Returns the new size of the array
int deleteElement(int arr[], int size, int target) {
    int index = -1;

    // 1. Search for the element to find its index
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    // If the element is not found, return the original size
    if (index == -1) {
        printf("Element %d not found.\n", target);
        return size;
    }

    // 2. Shift elements to the left to overwrite the deleted item
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // 3. Return the decremented size
    return size - 1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30; // Element to delete

    printf("Original array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    size = deleteElement(arr, size, target);

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
