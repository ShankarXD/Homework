#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    int *ptr = arr;
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }
    printf("%d", sum);
    free(arr);
    return 0;
}