#include <stdio.h>
int main() {
    int n, max = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(n > 0; n /= 10) if(n % 10 > max) max = n % 10;
    printf("Maximum digit: %d\n", max);
    return 0;
}