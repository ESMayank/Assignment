#include <stdio.h>

void scalar_multiplication(int matrix[][10], int row, int col, int scalar) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            matrix[i][j] = matrix[i][j] * scalar;
        }
    }
}

int main() {
    int row, col;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &row);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &col);
    int matrix[row][10]; // assume the max column is 10
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int scalar;
    printf("Enter the scalar to be multiplied: ");
    scanf("%d", &scalar);

    scalar_multiplication(matrix, row, col, scalar);

    printf("Matrix after scalar multiplication:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
