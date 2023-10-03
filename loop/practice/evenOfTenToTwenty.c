#include <stdio.h>

int main()
{
    int start = 10, end = 20;

    printf("\n\nfor\n\n");

    for (start; start <= end; start++)
    {
        if (start % 2 == 0)
        {
            printf("%d is even\n", start);
        }
    }

    printf("\n\nwhile\n\n");

    start = 10, end = 20;

    while (start <= end)
    {
        if (start % 2 == 0)
        {
            printf("%d is even\n", start);
        }

        start++;
    }

    printf("\n\ndo while\n\n");

    start = 10, end = 20;

    do
    {
        if (start % 2 == 0)
        {
            printf("%d is even\n", start);
        }

        start++;
    } while (start <= end);
}