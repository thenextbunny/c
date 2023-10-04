#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 'A';

    printf("The current character is: %c\n", c);

    // Clean the principal entrance when you're working with char and scanf
    fflush(stdin);

    printf("Choose a new character: ");
    scanf("%c", &c);

    printf("The new character is: %c", c);

    return 0;
}