#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = malloc(5 * sizeof(int));
    if(arr == NULL) {
        return 1;
    }
    int sum = 0, i;
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);
    free(arr);
    return 0;
}