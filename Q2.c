#include <stdio.h>
void insertElement(int arr[], int *n, int element, int pos) {
    if (pos < 0 || pos > *n) {
        printf("Invalid insertion position.\n");
        return;
    }
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    (*n)++;
}
void deleteElement(int arr[], int *n, int pos) {
    if (pos < 0 || pos >= *n) {
        printf("Invalid deletion position.\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}
int main() {
    int n, i, j, element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a1[n + 1]; 
    printf("Enter %d elements:\n", n);
    for (int k = 0; k < n; k++) {
        scanf("%d", &a1[k]);
    }
    printf("Enter the element to insert and its position (0-based index): ");
    scanf("%d %d", &element, &i);
    insertElement(a1, &n, element, i);
    printf("Array after insertion:\n");
    for (int k = 0; k < n; k++) {
        printf("%d ", a1[k]);
    }
    printf("\n");
    printf("Enter the position of the element to delete (0-based index): ");
    scanf("%d", &j);
    deleteElement(a1, &n, j);
    printf("Array after deletion:\n");
    for (int k = 0; k < n; k++) {
        printf("%d ", a1[k]);
    }
    printf("\n");
    return 0;
}