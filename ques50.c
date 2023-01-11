#include <stdio.h>

void copy_array(int *src, int *dst, int size) {
    for (int i = 0; i < size; i++) {
        *(dst + i) = *(src + i);
    }
}

void reverse_array(int *arr, int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = *(arr + i);
        *(arr + i) = *(arr + size - i - 1);
        *(arr + size - i - 1) = temp;
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size], reversed_arr[size], copied_arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    copy_array(arr, copied_arr, size);

    reverse_array(arr, size);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
