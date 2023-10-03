/**
 * To use accents
 * @include <stdlib.h>
 * @include <locale.h>
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Enable accents
    setlocale(LC_ALL, "");

    printf("Olá");
    return 0;
}
