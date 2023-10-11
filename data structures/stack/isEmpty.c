#include <stdio.h>
#include "./isEmpty.util.c"
#include "./pop.util.c"

int main()
{
    int array[4] = {44, 55, 66, 77}, top = 3;

    pop(array, &top);
    pop(array, &top);
    pop(array, &top);
    pop(array, &top);

    if (isEmpty(top))
    {
        printf("The stack is empty!");
    }

    return 0;
}