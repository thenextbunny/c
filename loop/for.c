/**
 * Counting to ten and multiplication table
 */

#include <stdio.h>

int main()
{
    int i, count = 10;

    printf("One-to-one counting");

    for (i = 0; i <= count; i++)
    {
        printf("\n%d", i);
    }

    printf("\nTwo-to-two counting");

    for (i = 0; i <= count; i = i + 2)
    {
        printf("\n%d", i);
    }

    printf("\n\nMultiplication table");

    for (i = 0; i <= count; i++)
    {
        printf("\n2 * %d = %d", i, 2 * i);
    }

    return 0;
}