#include "../utils/printArray.c"
#include "./pop.util.c"

int main()
{
    int array[6] = {54, 649, 54, 89, 44, 17},
        top = 5;

    pop(array, &top);
    pop(array, &top);
    pop(array, &top);
    pop(array, &top);
    pop(array, &top);
    pop(array, &top);
    pop(array, &top);

    printArray(array, 6);
}
