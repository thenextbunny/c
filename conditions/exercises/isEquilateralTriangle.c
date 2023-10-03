#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter three integers: \n");
    scanf("%d %d %d", &a, &b, &c);

    if ((a == b) && (b == c))
    {
        printf("Is equilateral triangle!");
    }
    else
    {
        printf("Is'nt equilateral triangle :/");
    }

    return 0;
}