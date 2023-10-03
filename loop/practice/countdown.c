#include <stdio.h>
#define END 0

int main()
{
    int number;

    printf("From which integer should I start the countdown?\n");
    scanf("%d", &number);

    printf("\n\nfor\n\n");

    int a = number;

    for (END; a >= END; a--)
    {
        printf("%d\n", a);
    }

    printf("\n\nwhile\n\n");

    int b = number;

    while (b >= END)
    {
        printf("%d\n", b);

        b--;
    }

    printf("\n\ndo while\n\n");

    int c = number;

    do
    {
        printf("%d\n", c);
        c--;
    } while (c >= END);
}