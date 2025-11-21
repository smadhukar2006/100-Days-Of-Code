#include <stdio.h>

int main() {
    int m1, n1, m2, n2, i, j, k;

   
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m1, &n1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &m2, &n2);

    
    if (n1 != m2) {
        printf("Matrix multiplication not possible. Columns of first must equal rows of second.\n");
        return 1;
    }

    int A[m1][n1], B[m2][n2], C[m1][n2];

    printf("Enter elements of first matrix (%d × %d):\n", m1, n1);
    for (i = 0; i < m1; i++)
        for (j = 0; j < n1; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second matrix (%d × %d):\n", m2, n2);
    for (i = 0; i < m2; i++)
        for (j = 0; j < n2; j++)
            scanf("%d", &B[i][j]);

    
    for (i = 0; i < m1; i++)
        for (j = 0; j < n2; j++)
            C[i][j] = 0;

    
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            for (k = 0; k < n1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    
    printf("Product of the matrices (%d × %d):\n", m1, n2);
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}