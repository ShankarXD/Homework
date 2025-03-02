#include <stdio.h>

void StaticVariable() {
    static int count = 0;
    count++;
    printf("Static count: %d\n", count);
}

int main() {
    for (int i = 0; i < 5; i++) {
        StaticVariable();
    }
    return 0;
}

