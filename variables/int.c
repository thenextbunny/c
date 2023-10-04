#include <stdio.h>

int main()
{
    // Set variable
    int a = 20;
    int b = 40;

    // Print
    printf("The integers a and b are: %d and %d \n", a, b);

    // Read
    printf("Set a new value for b: \n");
    scanf("%d", &b);
    printf("The new integers are: %d and %d \n", a, b);

    // Pause
    system("pause");

    // Finish
    printf("The end...");

    return 0;
}
