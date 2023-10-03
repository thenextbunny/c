/**
 * Do, without checking, and while
 */

#include <stdio.h>

int main()
{
    printf("Increment\n");

    int a = 1;

    do
    {
        printf("%d\n", a);

        a++;
    } while (a <= 10);

    printf("Decrement\n");

    int b = 10;

    do
    {
        printf("%d\n", b);

        b--;
    } while (b != 0);

    return 0;
}