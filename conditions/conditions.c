#include <stdio.h>

int main() {
    int age;

    printf("What's your age? \n");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You can drink alcohol \n");
    } else {
        printf("You can't drink alcohol \n");
    }

    if (age % 2 == 0) {
        printf("Your age is even");
    } else {
        printf("Your age is odd");
    }

    return 0;
}