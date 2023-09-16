#include <stdio.h>
#include <string.h>

int userInput()
{
    int myNum;

    printf("Type a number and press enter: \n");
    scanf("%d", &myNum);

    printf("Your number is:%d\n", myNum);
}

int multipleInputs()
{
    int myNumber;
    char myChar;

    printf("Type a number and a charcter and press enter: \n");
    scanf("%d %c", &myNumber, &myChar);

    printf("Your number is: %d\n", myNumber);
    printf("Your char is: %c\n", myChar);
}

int main()
{
    userInput();
    multipleInputs();

    return (0);
}