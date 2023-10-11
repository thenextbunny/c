#include <stdio.h>
#include "./constructor.util.c"
#include "./push.util.c"
#include "./peek.util.c"
#include "../utils/printArray.c"

int main()
{
    int array[2], top;

    constructor(array, 2, &top);

    push(array, 2, &top);
    push(array, 2, &top);

    printArray(array, 2);

    printf("The top of the stack is %d", peek(array, top));

    return 0;
}