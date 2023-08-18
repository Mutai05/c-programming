#include <stdio.h>

// Using 'printf' Function

void printfFunction()
{
    int age = 27;
    printf("My age is %d years old.\n", age);
}

// Using 'puts' Function. SImpler alternative to printf

void putsFunction()
{
    puts("Hello, Wold!\n");
}

// Using 'putchar' Function

void putcharFunction()
{
    putchar('M');
    putchar('u');
    putchar('t');
    putchar('a');
    putchar('i');
    putchar(' ');
    putchar('K');
    putchar('e');
    putchar('l');
    putchar('v');
    putchar('i');
    putchar('n');
    putchar('\n');
}

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

// The sizeof Operator in C

int sizeofOperator()
{
    int intSize = sizeof(int);
    printf("Size of int: %d bytes\n", intSize);

    size_t doubleSize = sizeof(double);
    printf("Size of double: %zu bytes\n", doubleSize);

    size_t charSize = sizeof(char);
    printf("Size of char: %zu byte\n", charSize);
}

int main()
{
    printfFunction();
    putsFunction();
    putcharFunction();
    printGreeting();
    getInputAndPrint();
    sizeofOperator();
    return 0;
}