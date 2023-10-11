#include "./isFull.util.c"

/**
 * Pushes a value to the top of the stack
 * @param array The array that contains the stack.
 * @param size The size of the stack.
 * @param top The index of the last element in the stack.
 */
void push(int *array, int size, int *top)
{
    int value;

    if (isFull(size, *top))
    {
        printf("\nThe stack is full\n\n");
    }
    else
    {

        *top += 1;

        printf("Enter a value: ");
        scanf("%d", &value);

        array[*top] = value;
    }
}