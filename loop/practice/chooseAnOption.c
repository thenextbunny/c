#include <stdio.h>

int main()
{
    int option;

    while (option < 1 || option > 3)
    {

        printf("Choose an option: \n");
        printf("1. Sign In\n");
        printf("2. Sign Up\n");
        printf("3. Sign Out\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Sign In");
            break;
        case 2:
            printf("Sign Up");
            break;
        case 3:
            printf("Sign Out");
            break;
        default:
            printf("Option doesn't exist\n");
            break;
        }
    }

    return 0;
}