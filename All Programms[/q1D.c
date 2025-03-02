#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, b;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        b = t1 + t2;
        t1 = t2;
        t2 = b;
    }
    printf("\n");
    return 0;
}