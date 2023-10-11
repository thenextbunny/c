#include <stdbool.h>

/**
 * Check if the stack is full
 * @param size
 * @param top
 * @return bool
 */
bool isFull(int size, int top)
{
    if (top == size - 1)
        return true;

    return false;
};