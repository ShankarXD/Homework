#include <stdio.h>

int main(void) {
    int matrix[2][3], row_sum[2] = {0, 0};

    printf("Enter elements of 2x3 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            row_sum[i] += matrix[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        printf("Sum of row %d: %d\n", i + 1, row_sum[i]);
    }

    return 0;
}