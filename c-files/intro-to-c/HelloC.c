#include <stdio.h>
#include <string.h>

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
    printf("Enter a Number: \n");
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

/* Assign value to another variable */

int assignValue(void)
{

    int myNum = 15;
    int myOtherNum = 23;

    myNum = myOtherNum;

    printf("My new number is: %d\n", myNum);
}

/* Real Life Example of Naming Variables */

int namingVariables(void)
{
    // Student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    // Print variables
    printf("Student id: %d\n", studentID);
    printf("Student age: %d\n", studentAge);
    printf("Student fee: %f\n", studentFee);
    printf("Student grade: %c\n", studentGrade);
}

/* Create a destination character array using strcpy */

int stringFunctions(void)
{
    char source[] = "Hello!";
    char destination[20];

    /* Copy source to destination */
    strcpy(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
}

/* Create a destination character array using strcpy */

int stringLength(void)
{
    /* Declare a character array with a size of 20 */

    char destination[20];

    /* Assign a string to the destination */

    strcpy(destination, "Hello, World!");

    /* Print the string in destination */

    printf("Destination is: %s\n", destination);
}

int main(void)
{
    printfFunction();
    putsFunction();
    putcharFunction();
    getInputAndPrint();
    sizeofOperator();
    assignValue();
    namingVariables();
    stringFunctions();
    stringLength();
    return (0);
}