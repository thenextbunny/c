/**
 * pt - vetor
 */

#include <stdio.h>
#define SIZE 3

/**
 * Print an array
 * @param int array[]
 * @param int size
 */
void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Value in position %d: %d\n", i, array[i]);
    }
}

int main()
{
    // Define
    int array[3], i;

    // Passing values
    array[0] = 0;
    array[1] = 5;
    array[2] = 10;

    printf("\n\nReceiving only one value\n\n");

    printf("%d\n\n", array[2]);

    printf("\n\nReading all values\n\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("Value in position %d: %d\n", i, array[i]);
    }

    printf("\n\nReceiving and setting new values\n\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("Set a value to position %d: ", i);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("Value in position %d: %d\n", i, array[i]);
    }

    printf("\n\nAnother way to define\n\n");

    int array2[3] = {1,
                     2,
                     3};

    printArray(array2, SIZE);

    return 0;
}

/* */