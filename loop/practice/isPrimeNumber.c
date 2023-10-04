#include <stdio.h>

int main()
{
    int number, i = 1, dividers;

    printf("Choose a integer to find out if it's prime: ");
    scanf("%d", &number);

    // Loop way
    for (i = 1; i <= number; i++)
    {

        if (number % i == 0)
        {
            dividers++;
        }

        printf("%d / %d = %d \n", number, i, number % i);
    }

    if (dividers == 2)
    {
        printf("The number is prime!");
    }
    else
    {
        printf("The number isn't prime! It has %d dividers", dividers);
    }

    return 0;
}