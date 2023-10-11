#include "./isEmpty.util.c"

/**
 * Returns the value at the top of the stack.
 * @param array The array that contains the stack.
 * @param top The index of the last element in the stack.
 */
int peek(int *array, int top)
{
    if (isEmpty(top))
    {
        return -1;
    }

    return array[top];
}