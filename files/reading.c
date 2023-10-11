#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;

    file = fopen("reading.txt", "r");

    if (file == NULL)
    {
        perror("Error opening file");
        return -1;
    }

    // Reading
    int characters;

    while ((characters = getc(file)) != EOF)
    {
        printf("%c", characters);
    }

    fclose(file);

    return 0;
}