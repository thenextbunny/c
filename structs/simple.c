#include <stdio.h>
#include <string.h>

struct line
{
    int position;
    char name[256];
};

int main()
{
    struct line line;

    line.position = 1;

    // To copy a string to a struct variable, use strcpy
    strcpy(line.name, "John");

    printf("%s in position %d", line.name, line.position);

    return 0;
}
