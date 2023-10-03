#include <stdio.h>

int main() {
    int a = 50;

    printf("The value of a is %d \n", a);

    printf("Set the new value: ");

    scanf("%d", &a);

    printf("The value change to %d \n", a);

    return 0;
}