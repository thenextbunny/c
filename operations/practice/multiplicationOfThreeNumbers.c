#include <stdio.h>

int main() {
    int a, b, c, result;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    result = a * b * c;

    printf("The multiplication between %d, %d and %d is %d", a, b, c, result);

    return 0;
}