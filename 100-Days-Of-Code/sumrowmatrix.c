#include <stdio.h>

int main() {
    int m, n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n], rowSum[m];

   
    printf("Enter elements of the matrix (%d × %d):\n", m, n);
    for (i = 0; i < m; i++) {
        rowSum[i] = 0; 
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    
    printf("Sum of each row:\n");
    for (i = 0; i < m; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}