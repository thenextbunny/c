#include <stdio.h>

void defineArrayAndAverage(int array[], int size)
{
    int i, average = 0;

    for (i = 0; i < size; i++)
    {
        printf("Set a value to position %d: ", i);
        scanf("%d", &array[i]);
        average = average + array[i];
    }

    average = average / size;

    printf("Average: %d", average);
}

int main()
{
    int array[3], size = 3;

    defineArrayAndAverage(array, size);

    return 0;
}