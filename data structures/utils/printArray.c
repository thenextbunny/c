#include <stdio.h>

/**
 * Function to print an array with 1 line
 * @param *array
 * @param size
 * @return int
 *
 * @example printArray(array, 3);
 * @return { 2, 4, 8 }
 */
int printArray(int *array, int size)
{
    printf("\n{");
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", array[i]);
    }
    printf("}\n\n");
}