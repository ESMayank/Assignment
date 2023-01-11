#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int pos, val;
    printf("Enter the position at which you want to insert the new element: ");
    scanf("%d", &pos);
    printf("Enter the value of the new element: ");
    scanf("%d", &val);

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
    n++;
    
    printf("Array after insertion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
