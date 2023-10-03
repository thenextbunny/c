#include <stdio.h>

int main()
{
    float a, b, result;
    int operation;
    char signal;

    printf("Enter two numbers:\n");
    scanf("%f %f", &a, &b);

    printf("Select the operation:\n");
    printf("1. Sum\n2. Minus\n3. Times\n4. Divide\n");
    fflush(stdin);
    scanf("%d", &operation);

    switch (operation)
    {
    case 1:
        result = a + b;
        signal = '+';
        break;
    case 2:
        result = a - b;
        signal = '-';
        break;
    case 3:
        result = a * b;
        signal = '*';
        break;
    case 4:
        result = a / b;
        signal = '/';
        break;
    default:
        printf("The option doesn't exist");
        break;
    }

    printf("%f %c %f = %f", a, signal, b, result);

    return 0;
}