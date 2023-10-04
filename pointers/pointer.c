/**
 * * Pointer is a variable that stores the address of another variable.
 *
 * '&' Address of operator, it returns the address of a variable.
 * '*' Dereference operator, it returns the value of a variable that is stored in the address. Means: "value pointed by" or "content pointed by"
 *
 * * Variables stores values, pointers stores addresses (memory position).
 */

#include <stdio.h>

int main()
{
    // ? Define and reading a variable
    int number = 20;

    printf("The number is: %d\n", number);

    // Finding the address
    printf("The address of variable is: %d\n", &number);

    // ? Define and reading a pointer
    char letter = 'B';

    int *pointer;

    pointer = &letter;

    printf("The letter is: %c\n", letter);

    // Modifying the value of the variable through the pointer
    *pointer = 'C';

    printf("The letter modified by pointer is: %c\n", letter);

    return 0;
}