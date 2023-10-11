
int enqueue(int *array, int *end, int value, int size)
{
    if (*end == size - 1)
    {
        printf("Queue is full\n");
        return 0;
    }

    *end += 1;

    array[*end] = value;
}
