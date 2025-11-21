#include <stdio.h>

int main() {
    int m, n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n], transpose[n][m];

    
    printf("Enter elements of the matrix (%d × %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of the matrix (%d × %d):\n", n, m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}