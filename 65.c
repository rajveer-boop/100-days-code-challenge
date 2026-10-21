#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        // Safe midpoint calculation to prevent integer overflow
        int mid = low + (high - low) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; // Target found, return its index
        }
        // If target is greater, ignore the left half
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    // Target was not present in the array
    return -1;
}

int main() {
    int nums[] = {-1, 0, 3, 5, 9, 12};
    // Calculate the number of elements in the array
    int size = sizeof(nums) / sizeof(nums[0]); 
    int target = 9;

    int result = binarySearch(nums, size, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
