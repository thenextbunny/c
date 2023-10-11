#define SIZE 10
#include "utils.c"
#include "enqueue.util.c"
#include "../utils/printArray.c"

int main()
{
    int array[SIZE] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        end, start;

    constructor(&start, &end);

    enqueue(array, &end, 10, SIZE);
    enqueue(array, &end, 20, SIZE);
    enqueue(array, &end, 30, SIZE);

    printArray(array, size(&start, &end));

    return 0;
}