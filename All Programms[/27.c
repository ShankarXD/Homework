#include <stdio.h>

void func(int *p, int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", p[i]);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    func(arr, size);
    return 0;
}