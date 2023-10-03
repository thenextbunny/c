#include <stdio.h>

int main()
{
    char a = 'A';

    // If statement
    if (a == 'A')
    {
        printf("Pass the validation \n");
    }
    else
    {
        printf("Don't pass the validation");
    }

    // ASCII code
    int code = a;

    printf("The ASCII code of %c is %d \n", a, code);

    // Check if true using ASCII
    if (a == code)
    {
        printf("The ASCII is the same as char");
    }
    else
    {
        printf("The ASCII is different");
    }

    return 0;
}