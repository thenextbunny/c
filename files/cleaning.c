#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("cleaning.txt", "w");

    fprintf(file, "");

    fclose(file);
}