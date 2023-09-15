#include <stdio.h>

int arraySize()
{
    int myNumbers[] = {25, 50, 75, 100};

    printf("%d\n", myNumbers[0]);
}

int changeArray()
{
    int myNumber[] = {25, 50, 75, 100};
    myNumber[0] = 33;

    printf("%d\n\n", myNumber[0]);
}

int loopArrays()
{
    int myNumbers[] = {25, 50, 75, 100};
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("%d\n\n", myNumbers[i]);
    }
}

int arraySizes()
{
    // Declare an array of integers with 5 elements
    int myArray[5];

    // Initialize the elements of the array
    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;
    myArray[3] = 40;
    myArray[4] = 50;

    // Access and print values from the array
    printf("Element 0: %d\n", myArray[0]);
    printf("Element 1: %d\n", myArray[1]);
    printf("Element 2: %d\n", myArray[2]);
    printf("Element 3: %d\n", myArray[3]);
    printf("Element 4: %d\n", myArray[4]);
}

int main()
{
    arraySize();
    changeArray();
    loopArrays();
    arraySizes();

    return (0);
}