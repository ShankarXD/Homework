#include <stdio.h>

int main(void) {
    int matrix[3][2], sum = 0;

    printf("Enter elements of 3x2 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] % 2 != 0) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of odd elements: %d\n", sum);
    return 0;
}