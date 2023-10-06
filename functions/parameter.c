
#include <stdio.h>

int numberSuccessor(int number)
{
    return number + 1;
}

int numberPredecessor(int number)
{
    return number - 1;
}

int main()
{
    int number, predecessor, successor;

    printf("Enter a integer: ");
    scanf("%d", &number);

    successor = numberSuccessor(number);
    predecessor = numberPredecessor(number);

    printf("The successor of %d is %d\n", number, successor);
    printf("The predecessor of %d is %d\n", number, predecessor);

    return 0;
}