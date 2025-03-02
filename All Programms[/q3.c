#include <stdio.h>

int main(void) {
    int arr[5], i, sum = 0;
    float average;
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = sum / 5.0;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}