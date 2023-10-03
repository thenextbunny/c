/**
* To use bool
* @include <stdbool.h>
*/ 

#include <stdio.h>
#include <stdbool.h>

int main() {
    bool a = true, b = false;

    // 1
    if (a) {
        printf("The variable a is true \n");
    }

    // 2
    if (b) {
        printf("Variable b is true");
    } else {
        printf("Variable b is false");
    }


    


    return 0;
}