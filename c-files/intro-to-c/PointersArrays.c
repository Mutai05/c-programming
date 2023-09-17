#include <stdio.h>

/*
 * You can loop through the array elements with a for loop:
 */

int loopArrays()
{
    int myNumbers[4] = {20, 35, 60, 75};
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("%d\n", myNumbers[i]);
    }

    return (0);
}

int printMemoryAddressess()
{
    int myNumbers[4] = {20, 35, 60, 75};
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("%p\n", &myNumbers[i]);
    }

    return (0);
}

/*
 * The compiler reserves 4 bytes of memory for each array element,
 * which means that the entire array takes up 16 bytes (4 * 4) of memory storage:
 *
 */

int memorySize()
{
    int myNumbers[4] = {25, 50, 75, 100};

    printf("%lu\n\n", sizeof(myNumbers));

    return 0;
}

/*
 * Ok, so what's the relationship between pointers and arrays?
 * Well, in C, the name of an array, is actually a pointer to the
 * first element of the array.
 *
 */

int pointersArrays()
{
    int myNumbers[4] = {25, 50, 75, 100};

    /* Get the memory address of the myNumbers array */
    printf("%p\n", myNumbers);

    /* Get the memory address of the first array element */
    printf("%p\n\n", &myNumbers[0]);

    return 0;
}

/*
 * This basically means that we can work with arrays through pointers!
 *
 * How?
 * Since myNumbers is a pointer to the first element in myNumbers,
 * you can use the * operator to access it:
 *
 */

int firstElement()
{
    int myNumbers[4] = {25, 50, 75, 100};

    printf("%d\n", *myNumbers);
}

/*
 * To access the rest of the elements in myNumbers,
 * you can increment the pointer/array (+1, +2, etc):
 *
 */

int accessElements()
{
    int myNumbers[4] = {25, 50, 75, 100};

    /* Get the value of the second element in myNumbers */
    printf("%d\n", *(myNumbers + 1));

    /* Get the value of the third element in myNumbers */
    printf("%d\n", *(myNumbers + 2));

    return 0;
}

int main()
{
    loopArrays();
    printMemoryAddressess();
    memorySize();
    pointersArrays();
    firstElement();
    accessElements();

    return (0);
}