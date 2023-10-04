#include <stdio.h>

void defineArray(int array[2][2], int size)
{
    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("Set a value to position [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

void printArray(int array[2][2], int size)
{
    int i, j;

    for (i = 0; i < size; i++)
    {
        printf("[");
        for (j = 0; j < size; j++)
        {
            printf(" %d ", array[i][j]);
        }
        printf("]\n");
    }
}

void reverseArray(int array[2][2], int size)
{
    int i, j;

    int reverseArray[2][2];

    for (i = 0; i < 2; i++)
    {
        int k = 1;
        for (j = 0; j < 2; j++)
        {
            reverseArray[i][j] = array[i][k];
            k--;
        }
    }

    printArray(reverseArray, 2);
}

int main()
{
    int array[2][2];

    defineArray(array, 2);

    printArray(array, 2);

    reverseArray(array, 2);

    return 0;
}
