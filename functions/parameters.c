#include <stdio.h>

int sum(int a, int b)
{
}

int main()
{
    int a, b;

    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d", a, b, sum(a, b));

    return 0;
}