#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    int len, pal = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            pal = 0;
            break;
        }
    }

    if (pal) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}