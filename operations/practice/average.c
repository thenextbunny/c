#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, result;

    printf("Enter the first note: \n");
    scanf("%f", &a);

    printf("Enter the second note: \n");
    scanf("%f", &b);

    result = (a + b) / 2;

    printf("The average is %f", result);

    return 0;
}
