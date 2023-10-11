#include <stdio.h>
#include <string.h>
#define SIZE 256

int main()
{
    // Define
    char word[SIZE];

    printf("Type a word: ");

    // Clear buffer
    setbuf(stdin, 0);

    // Reading
    fgets(word, SIZE, stdin);

    // In this way, the word will use more memory than it needs, because the array will be defined with 256 positions and the word will use only the necessary positions
    printf("The word is: %s", word);

    // In this way, the word will use only the necessary memory
    word[strlen(word) - 1] = '\0';

    printf("The word cleaned is: %s", word);

    return 0;
}