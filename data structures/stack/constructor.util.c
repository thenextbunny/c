/**
 * Constructor is used to initialize the stack.
 * @param array The array that contains the stack.
 * @param size The size of the stack.
 * @param top The index of the last element in the stack.
 * @return void
 * @example constructor(array, 5, &top) -> array = { 0, 0, 0, 0, 0 }, top = -1
 */
void constructor(int *array, int size, int *top)
{
    *top = -1;

    for (int i = 0; i < size; i++)
    {
        array[i] = 0;
    }
}