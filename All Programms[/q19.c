#include <stdio.h>

int palindrome(int num) {
    int a = 0, b = num, c;
    while (num != 0) {
         c = num % 10;
        a = a * 10 + b;
        num /= 10;
    }
    return b == a;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (palindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }
    return 0;
}