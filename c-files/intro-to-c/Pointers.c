#include <stdio.h>

/*
 * A pointer is a variable that stores the
 * memory address of another variable as its value.
 *
 */

int pointerVariable()
{

    /* A int variable */
    int myAge = 44;

    /* A pointer variable, with the name ptr
     * that stores the address of my age
     */
    int *ptr = &myAge; // Use & to get the address of myAge

    /* Output the value of myAge */
    printf("%d\n", myAge);

    /* Output the memory address of myAge (in hexadecimal format) */
    printf("%p\n", (void *)&myAge);

    /* Output the memory address stored in the pointer (in hexadecimal format) */
    printf("%p", (void *)ptr);

    return 0;
}

/*
 * Dereference
 */

int dereferenceOperator()
{
    int myNumber = 88;
    int *ptr = &myNumber;

    printf("%p\n", ptr);
    printf("%d\n", *ptr);

    return (0);
}

int main()
{
    pointerVariable();
    dereferenceOperator();

    return 0;
}
