#include <stdio.h>
#include <stdbool.h>
#define SIZE 11

bool searchValue(int *array, int *position, int size, int value)
{
    int start = 0, middle, end = size - 1;

    while (start <= end)
    {
        middle = (start + end) / 2;

        if (array[middle] == value)
        {
            return true;
        }
        else if (array[middle] < value)
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
    }

    return false;
};

int main()
{
    int array[11] = {
        0,
        9,
        18,
        27,
        36,
        45,
        54,
        63,
        72,
        81,
        90,
    },
        position, value;

    printf("Enter the value to find: ");
    scanf("%d", &value);

    if (searchValue(array, &position, SIZE, value))
    {
        printf("The value %d was found :D", value);
    }
    else
    {
        printf("The value %d was not found :(", value);
    }

    return 0;
}

/*
#include <stdio.h>
#include <stdbool.h>

#include "../utils/printArray.c"

#define SIZE 11

bool binarySearch(int *array, int size, int value)
{
    int start = 0, end = size - 1, middle;

    while (start <= end)
    {
        middle = (start + end) / 2;

        if (array[middle] == value)
        {
            return true;
        }
        else if (array[middle] < value)
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
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
        position, value;



    printArray(array, SIZE);

    printf("\n\n");

    printf("Enter the value to find: ");

    scanf("%d", &value);

    if (binarySearch(array, SIZE, value))
    {
        printf("The value %d was found!", value);
    }
    else
    {
        printf("The value %d was not found!", value);
    }
}
*/