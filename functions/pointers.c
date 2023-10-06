#include <stdio.h>
#include <stdbool.h>

int addTen(int number)
{
    return number * 10;
}

int addTenWithPointer(int *number)
{
    *number += 10;
}

int main()
{
    int number, result;

    printf("Enter a integer: ");
    scanf("%d", &number);

    // Without pointer
    result = addTen(number);

    printf("Without pointer | %d + 10 = %d\n", number, result);

    // With pointer
    addTenWithPointer(&number);

    printf("With pointer | *this number is changed because it's a pointer* + 10 = %d", number, number);

    // With pointer
    // printf("%d is even with pointer: %s\n", number, isEvenWithPointer(&number) ? "true" : "false");

    return 0;
}