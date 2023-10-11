#include <stdio.h>
#include "utils.c"
#include "enqueue.util.c"
#include "../utils/printArray.c"

#define SIZE 10

int dequeue(int *array, int *start)
{
    if (*start == -1)
    {
        printf("The queue is empty");
        return -1;
    }

    array[*start] = 0;
    *start++;
}

int main()
{
    int array[SIZE] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        end, start;

    constructor(&start, &end);

    enqueue(array, &end, 10, SIZE);
    enqueue(array, &end, 20, SIZE);
    enqueue(array, &end, 30, SIZE);

    printArray(array, size(&start, &end));

    dequeue(array, &start);
    dequeue(array, &start);
    dequeue(array, &start);
    dequeue(array, &start);
    dequeue(array, &start);
    dequeue(array, &start);
    dequeue(array, &start);

    printArray(array, size(&start, &end));

    return 0;
}
