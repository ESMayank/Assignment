#include <stdio.h>

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubble_sort(arr, n);
    printf("Array after sorting: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int second_largest = arr[n-2];
    printf("\nSecond largest element in the array: %d\n", second_largest);
    return 0;
}
