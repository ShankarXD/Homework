#include <stdio.h>

void check(int num) {
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
    return 0;
}