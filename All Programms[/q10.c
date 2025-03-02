#include <stdio.h>

int main(void) {
    int m, n, sum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (i == j) {
                sum += a[i][j];
            }
        }
    }
    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}