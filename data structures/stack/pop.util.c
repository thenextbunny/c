#include "./isEmpty.util.c"

/**
 * Removes the last element from the stack.
 * @param array The array that contains the stack.
 * @param top The index of the last element in the stack.
 */
void pop(int *array, int *top)
{
    if (isEmpty(*top))
    {
        printf("The stack is already empty.\n");
    }
    else
    {
        printf("The value %d was removed from the stack.\n", array[*top]);
        array[*top] = 0;
        *top = *top - 1;
    }
}
