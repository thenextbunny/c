#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct BirthDate
{
    int day;
    int month;
    int year;
} BirthDate;

struct Student
{
    int id;
    char name[256];
    BirthDate birthDate;
};

int generateId()
{
    srand((unsigned)time(NULL));

    int random = rand();

    return random;
}

int main()
{
    struct Student student;

    student.id = generateId();

    printf("What is the student's name? ");
    scanf("%s", student.name);

    printf("Enter the day of birth: ");
    scanf("%d", &student.birthDate.day);

    printf("Enter the month of birth: ");
    scanf("%d", &student.birthDate.month);

    printf("Enter the year of birth: ");
    scanf("%d", &student.birthDate.year);

    printf("The student %s with id %d was born in %d/%d/%d", student.name, student.id, student.birthDate.day, student.birthDate.month, student.birthDate.year);
}