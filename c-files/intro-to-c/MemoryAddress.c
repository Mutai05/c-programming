#include <stdio.h>

/*
 * When a variable is created in C, a memory address is assigned to the variable.
 *
 * The memory address is the location of where the variable is stored on the computer.
 *
 * When we assign a value to the variable, it is stored in this memory address.
 *
 * To access it, use the reference operator (&), and the result represents where
 *
 * the variable is stored:
 *
 */

int memoryAddress()
{
    int myAge = 27;
    printf("%d\n", myAge);
    printf("%p\n", &myAge);

    return (0);
}

int main()
{
    memoryAddress();

    return (0);
}
