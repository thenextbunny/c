int constructor(int *start, int *end)
{
    *start = 0;
    *end = -1;
}

int size(int *start, int *end)
{
    return *end - *start + 1;
}