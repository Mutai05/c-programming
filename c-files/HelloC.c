#include <stdio.h>

// Function to print a greeting

void printGreeting()
{
    printf("Hello, World!\n");
}

// Function to get input from user and print it

void getInputAndPrint()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
}

int main()
{
    printGreeting();
    getInputAndPrint();
    return 0;
}