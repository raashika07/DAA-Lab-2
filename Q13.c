#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void findSecondLargestAndSecondSmallest(int arr[], int n) {
    if (n < 4) {
        printf("Array must have at least four elements.\n");
        return;
    }
    int *secondLargest = NULL, *secondSmallest = NULL;
    int largest = arr[0], smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = &largest;
            largest = arr[i];
        } else if (arr[i] < smallest) {
            secondSmallest = &smallest;
            smallest = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] < largest && (secondLargest == NULL || arr[i] > *secondLargest)) {
            secondLargest = &arr[i];
        }
        if (arr[i] > smallest && (secondSmallest == NULL || arr[i] < *secondSmallest)) {
            secondSmallest = &arr[i];
        }
    }
    swap(secondLargest, secondSmallest);
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {12, 35, 1, 10, 34, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array:\n");
    printArray(arr, n);
    findSecondLargestAndSecondSmallest(arr, n);
    printf("Array after interchanging second largest and second smallest:\n");
    printArray(arr, n);
    return 0;
}