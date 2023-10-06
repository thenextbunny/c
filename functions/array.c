#include <stdio.h>

int showArray(int *array, int size)
{
    int i = 0;

    printf("{");
    for (i = 0; i < size; i++)
    {
        printf(" %d ", array[i]);
    }
    printf("}");
}

int main()
{
    int array[3] = {2,
                    4,
                    8};

    showArray(array, 3);

    return 0;
}