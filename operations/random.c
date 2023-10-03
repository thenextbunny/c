#include <stdio.h>
#include <stdlib.h>
#include <time.h> // It's necessary to use time() function

int main()
{
    srand((unsigned)time(NULL));

    int random = rand();

    printf("%d", random);

    return 0;
}