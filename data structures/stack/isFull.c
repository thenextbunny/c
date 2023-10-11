#include <stdio.h>
#include "./push.util.c"
#include "./isFull.util.c"

int main()
{
    int array[5] = {1, 2, 3, 4, 5}, top = 4;

    if (isFull(5, top))
    {
        printf("The stack is full");
    }

    return 0;
}