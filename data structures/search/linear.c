#include <stdio.h>
#include <stdbool.h>

#include "../utils/printArray.c"

#define SIZE 11

bool searchValue(int *array, int size, int value, int *position)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            *position = i;
            return true;
        }
    }

    return false;
}

int main()
{
    int array[SIZE] = {
        10,
        12,
        14,
        16,
        18,
        20,
        22,
        24,
        26,
        28,
        30,
    },
        position = -1, value;

    printf("Enter the value to find: ");
    scanf("%d", &value);

    if (searchValue(array, SIZE, value, &position))
    {
        printf("The value %d was found in position %d!", value, position);
    }
    else
    {
        printf("The value %d was not found!", value);
    }

    printf("\n\n");

    printArray(array, SIZE);
}