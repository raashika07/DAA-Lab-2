#include <stdio.h>
void printDistinctElements(int arr[], int n) {
    int count;
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }
        count = 1; 
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1;  
                count++;
            }
        }
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }
}
int main() {
    int arr[] = {12, 10, 9, 45, 2, 10, 10, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Distinct (Unique) elements are:\n");
    printDistinctElements(arr, n);
    return 0;
}