#include <stdio.h>
#include <stdlib.h>
int linearSearch(float arr[], int n, float target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  
        }
    }
    return -1;  
}
void inputArray(float arr[], int n) {
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%f", &arr[i]);
    }
}
void displayArray(float arr[], int n) {
    printf("\nThe array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    float searchNumber;
    float *arr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a valid number of elements (greater than 0)\n");
        return 1;
    }
    arr = (float *)malloc(n * sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    inputArray(arr, n);
    displayArray(arr, n);
    printf("\nEnter the number to search: ");
    scanf("%f", &searchNumber);
    int result = linearSearch(arr, n, searchNumber);
    if (result != -1) {
        printf("\nSearch Successful!\n");
        printf("Number %.2f found at index %d (position %d)\n", 
               searchNumber, result, result + 1);
    } else {
        printf("\nSearch Unsuccessful!\n");
        printf("Number %.2f was not found in the array\n", searchNumber);
    }
    free(arr);
    return 0;
}