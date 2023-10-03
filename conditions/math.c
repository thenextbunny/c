#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 100;

    // Greater than
    if (a > b) {
        printf("%d is greater than %d", a, b);
    } else {
        printf("%d is less than %d", a, b);
    }

    printf("\n");

    // Less than
    if (b < c) {
        printf("%d is less than %d", b, c);
    }

    printf("\n");

    // Different or equal
    if (a != b) {
        printf("%d is different or equal to %d");
    }

    return 0;
}