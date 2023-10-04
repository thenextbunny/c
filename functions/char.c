#include <stdio.h>
#include <stdlib.h>

char findLetterByAscii();

int main()
{
    int ascii;
    char character;

    printf("Enter a ASCII value to find the character: ");
    scanf("%d", &ascii);

    character = findLetterByAscii(ascii);

    printf("%c", character);
}

char findLetterByAscii(int ascii)
{
    char character = ascii;

    if (character < 65 || character > 90)
    {
        printf("The ASCII value is not a letter");
        exit(0);
    }

    return character;
}