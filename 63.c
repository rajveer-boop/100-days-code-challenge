#include <stdio.h>

// Function to merge two arrays into a third array
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i, j;

    // Copy elements of the first array
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements of the second array
    for (j = 0; j < n2; j++) {
        merged[n1 + j] = arr2[j]; // Start inserting after the last element of arr1
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8, 10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // The size of the merged array is the sum of both array sizes
    int n3 = n1 + n2;
    int merged[n3];

    mergeArrays(arr1, n1, arr2, n2, merged);

    printf("Merged array: ");
    printArray(merged, n3);

    return 0;
}
