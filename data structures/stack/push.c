#include <stdio.h>
#include <stdlib.h>
#include "../utils/printArray.c"
#include "./push.util.c"
#include "./constructor.util.c"

#define SIZE 10

int main()
{
    int array[SIZE], top = -1;

    // Without the constructor
    printf("This is the stack without the constructor:\n");
    printArray(array, SIZE);

    // With the constructor
    constructor(array, SIZE, &top);
    printf("This is the stack with constructor:\n");
    printArray(array, SIZE);

    // Adding values
    push(array, SIZE, &top);
    push(array, SIZE, &top);

    printArray(array, SIZE);

    return 0;
}
