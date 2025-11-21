#include <stdio.h>

int main() {
    int m, n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    int A[m][n], B[m][n], Sum[m][n];

   
    printf("Enter elements of first matrix (%d × %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("Enter elements of second matrix (%d × %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}