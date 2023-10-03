#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, result;

    printf("Enter the first note: \n");
    scanf("%f", &a);

    printf("Enter the second note: \n");
    scanf("%f", &b);

    result = abs(a - b);

    printf("The absolute value of difference between %f and %f is %f", a, b, result);

    return 0;
}