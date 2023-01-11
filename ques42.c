#include <stdio.h>

void merge_arrays(int a[], int m, int b[], int n, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] < b[j]) {
            result[k] = a[i];
            i++;
        } else {
            result[k] = b[j];
            j++;
        }
        k++;
    }

    // Append remaining elements of a if any
    while (i < m) {
        result[k] = a[i];
        i++;
        k++;
    }

    // Append remaining elements of b if any
    while (j < n) {
        result[k] = b[j];
        j++;
        k++;
    }
}

int main() {
    int m, n;
    printf("Enter the size of the first array: ");
    scanf("%d", &m);
    int a[m];
    printf("Enter the elements of the first array: ");
    for(int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n);
    int b[n];
    printf("Enter the elements of the second array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int result[m+n]; // array to store the result
    merge_arrays(a, m, b, n, result);

    printf("Merged array in ascending order: ");
}