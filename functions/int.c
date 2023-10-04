#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber();

int main()
{
    int number;

    number = randomNumber();

    printf("The random number is %d", number);

    return 0;
}

int randomNumber()
{
    srand(time(NULL));

    int number = rand();

    return number;
}