#include <stdio.h>

int main() {

    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int rows = 2, cols = 3;

    printf("Matrix :\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
