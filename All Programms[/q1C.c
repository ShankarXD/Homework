#include <stdio.h>

int main() {
    int n, b = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        b = b * i;
    }
    printf("Factorial of %d: %d\n", n, b);
    return 0;
}