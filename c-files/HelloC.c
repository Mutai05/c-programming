#include <stdio.h>

/* Using 'printf' Function */

void printfFunction(void)
{
    int age = 27;
    printf("My age is %d years old.\n", age);
}

/* Using 'puts' Function. SImpler alternative to printf */

void putsFunction(void)
{
    puts("Hello, Wold!\n");
}

/* Using 'putchar' Function */

void putcharFunction(void)
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

/* Function to get input from user and print it */

void getInputAndPrint(void)
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
}

/* The sizeof Operator in C */

int sizeofOperator(void)
{
    int intSize = sizeof(int);
    printf("Size of int: %d bytes\n", intSize);

    size_t doubleSize = sizeof(double);
    printf("Size of double: %zu bytes\n", doubleSize);

    size_t charSize = sizeof(char);
    printf("Size of char: %zu byte\n", charSize);
}

int main(void)
{
    printfFunction();
    putsFunction();
    putcharFunction();
    getInputAndPrint();
    sizeofOperator();
    return (0);
}