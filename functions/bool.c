#include <stdio.h>
#include <stdbool.h>

bool canDrive(int age)
{
    if (age < 18)
    {
        return false;
    }

    return true;
}

int main()
{
    int age;
    bool userCanDrive;

    printf("What's your age? ");
    scanf("%d", &age);

    userCanDrive = canDrive(age);

    if (userCanDrive)
    {
        printf("You can drive :D");
    }
    else
    {
        printf("You can't drive :(");
    }
}
