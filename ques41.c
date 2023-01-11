#include <stdio.h>
#include <stdbool.h>

bool isIdentity(int matrix[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && matrix[i][j] != 1) { // Check the elements on the main diagonal
                return false;
            }
            if (i != j && matrix[i][j] != 0) { // Check the other elements
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int matrix[n][10]; // assume the max column is 10
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isIdentity(matrix, n)) {
        printf("The matrix is an identity matrix\n");
    } else {
        printf("The matrix is not an identity matrix\n");
    }
    return 0;
}
