#include <stdio.h>
#include <stdlib.h>

int main() {
    // int 
    int d = 1;

    printf("The integer is %d \n", d);

    // float
    float f = 1.0;

    printf("The float is %f \n", f);

    // character, single quotes
    char c = 'A'; 

    // Clean the principal entrance when you're working with char and scanf
    fflush(stdin);

    scanf("%c", &c);
    
    printf("The character is: %c", c);

    return 0;
}