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

int stringInputs()
{
    char firstName[30];

    printf("Enter your first name: \n");
    scanf("%s", firstName);

    printf("Hello %s\n", firstName);
}

int main()
{
    userInput();
    multipleInputs();
    stringInputs();

    return (0);
}