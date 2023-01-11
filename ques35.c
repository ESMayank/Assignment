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
    int key;
    printf("Enter the element you want to search for: ");
    scanf("%d", &key);
    
    int index = -1; // initialize the index to -1
    for(int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i; // key found at index i
            break;
        }
    }
    
    if (index != -1) {
        printf("Element %d found at index %d\n", key, index);
    } else {
        printf("Element %d not found in the array\n", key);
    }
    return 0;
}
