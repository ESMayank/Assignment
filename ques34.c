#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int pos;
    printf("Enter the position of the element you want to delete: ");
    scanf("%d", &pos);

    for (int i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    
    printf("Array after deletion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
