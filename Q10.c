#include <stdio.h>
void rearrangeMaxMin(int arr[], int n) {
    int temp[n];
    int start = 0, end = n - 1; 
    int index = 0;
    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }
    while (start <= end) {
        if (index % 2 == 0) {
            arr[index] = temp[end--]; 
        } else {
            arr[index] = temp[start++]; 
        }
        index++;
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array:\n");
    printArray(arr, n);
    rearrangeMaxMin(arr, n);
    printf("Rearranged array in maximum-minimum form:\n");
    printArray(arr, n);
    return 0;
}