#include <stdio.h>

int main()
{
    printf("Increment\n");

    int a = 1;

    while (a <= 10)
    {
        printf("%d\n", a);

        a++;
    }

    printf("Decrement\n");

    int b = 10;

    while (b != 0)
    {
        printf("%d\n", b);

        b--;
    }

    return 0;
}