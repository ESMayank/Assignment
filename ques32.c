#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter the elements of the first array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    // copy elements of arr1 to arr2
    for(int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }
    printf("Elements of the second array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}
