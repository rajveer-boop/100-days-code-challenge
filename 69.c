#include <stdio.h>
#include <limits.h> // Required for INT_MIN

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        return -1; // Not enough elements
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++) {
        // 1. Current element is larger than the largest seen so far
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        // 2. Current element is between largest and second largest
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // If secondLargest wasn't updated, there is no valid second largest
    if (secondLargest == INT_MIN) {
        return -1;
    }

    return secondLargest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, size);

    if (result != -1) {
        printf("The second largest element is: %d\n", result); // Output: 34
    } else {
        printf("There is no second largest element.\n");
    }

    return 0;
}
