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
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum of all elements of the array: %d\n", sum);
    return 0;
}
