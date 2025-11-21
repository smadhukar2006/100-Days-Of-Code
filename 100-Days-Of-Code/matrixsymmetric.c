#include <stdio.h>

int main() {
    int m, n, i, j, isSymmetric = 1;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    if (m != n) {
        printf("Matrix is not square, so it cannot be symmetric.\n");
        return 0;
    }

    int matrix[m][n];

    printf("Enter elements of the matrix (%d × %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    if (isSymmetric)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");
}