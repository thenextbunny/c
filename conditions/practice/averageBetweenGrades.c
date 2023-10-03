#include <stdio.h>

int main()
{
    float grade1, grade2, grade3, average;

    printf("Enter three grades: \n");
    scanf("%f %f %f", &grade1, &grade2, &grade3);

    average = (grade1 + grade2 + grade3) / 3;

    if (average >= 7)
    {
        printf("Approved :D");
    }
    else
    {
        printf("Failed :(");
    }

    return 0;
}