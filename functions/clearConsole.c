#include <stdio.h>
#include <stdlib.h>

/**
 * A function that clears the console
 * @include stdlib.h
 */
int clearConsole()
{
    system("CLS");
}

void checkHeight(float height)
{
    printf("Your height is %.2f\n", height);

    if (height < 1.5)
    {
        printf("You're short");
    }
    else if (height >= 1.5 && height < 1.8)
    {
        printf("You're average");
    }
    else
    {
        printf("You're tall");
    }
}

int main()
{
    float height;

    printf("What's your height? ");
    scanf("%f", &height);

    clearConsole();

    checkHeight(height);

    return 0;
}
