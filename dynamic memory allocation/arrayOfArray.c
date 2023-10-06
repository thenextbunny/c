#include <stdio.h>
#include <stdlib.h>

int **allocateArray(int cols, int rows)
{
    int i, **aux; // aux

    // Allocate memory for the array cols
    aux = (int **)malloc(cols * sizeof(int *));

    // Allocate memory for the array rows
    for (i = 0; i < rows; i++)
    {
        aux[i] = (int *)malloc(rows * sizeof(int));
    }

    // Return the pointer that points to the first element of the array
    return aux;
}

int createArray(int **array, int cols, int rows)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter the value for the element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

int showArray(int **array, int cols, int rows)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        printf("{");
        for (j = 0; j < cols; j++)
        {
            printf(" %d ", array[i][j]);
        }
        printf("}\n");
    }
}

int main()
{
    int **array, cols = 3, rows = 3;

    // Ask to the user the size of the array
    printf("How many columns? ");
    scanf("%d", &cols);
    printf("How many rows? ");
    scanf("%d", &rows);

    // Allocate memory for the array
    array = allocateArray(cols, rows);

    // Create the array
    createArray(array, cols, rows);

    // Show array
    showArray(array, cols, rows);

    // Free memory
    free(array);

    return 0;
}