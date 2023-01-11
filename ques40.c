#include <stdio.h>

int isSparse(int matrix[][10], int row, int col) {
    int count_zero = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] == 0) {
                count_zero++;
            }
        }
    }
    if (count_zero > (row * col) / 2) {
        return 1;
    }
    return 0;
}

void transpose(int matrix[][10], int row, int col) {
    int transpose[10][10]; // assume max row is 10
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose of matrix is :\n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}


