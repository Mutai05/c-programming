#include <stdio.h>

/* Information can be passed to functions as a parameter.
 * Parameters act as variables inside the function.
 *
 * Inside the function, you can add as many parameters as you want:
 */

void myFunction(char name[], int age)
{
    printf("Hello %s! You are %d years old.\n", name, age);
}

void myFunctionArrays(int myNumbers[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", myNumbers[i]);
    }
}

/*
 * Return Values
 *
 * If you want the function to return a value, you can
 * use a data type (such as int or float, etc.) instead of void,
 * and use the return keyword inside the function:
 */

int myFunctionNumber(int x)
{
    return 5 + x;
}

int myFunctionSum(int x, int y)
{
    return x + y;
}

int storeResults(int x, int y)
{
    return x + y;
}

int main()
{
    myFunction("Mutai", 26);
    myFunction("Kelvin", 27);
    myFunction("Kipkemboi", 28);

    int myNumbers[5] = {10, 20, 30, 40, 50};
    myFunctionArrays(myNumbers);

    printf("Result is: %d\n\n", myFunctionNumber(3));
    printf("Result is: %d\n", myFunctionSum(10, 20));

    int results = storeResults(10, 15);
    printf("Result is: %d\n", results);

    return (0);
}