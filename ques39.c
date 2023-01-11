#include <stdio.h>

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

    int sum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of main diagonal elements of the matrix: %d\n", sum);
    return 0;
}
