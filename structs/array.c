
#include <stdio.h>

struct people
{
    char name[256];
    int age;
};

int main()
{
    struct people people[3];

    for (int i = 0; i < 3; i++)
    {
        printf("[%d] Enter the name: ", i);

        // To read a string from the user, use fgets
        scanf("%s", people[i].name);

        // Reading age
        printf("Enter the age for %s: ", people[i].name);
        scanf("%d", &people[i].age);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%s is %d years old\n", people[i].name, people[i].age);
    }

    return 0;
}