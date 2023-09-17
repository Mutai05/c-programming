#include <stdio.h>

/*
 * You will often see C programs that have function declaration
 * above main(), and function definition below main().
 * This will make the code better organized and easier to read:
 */

/* Function declaration */
int myFunction(int, int);

/* The main method */
int main()
{
    int result = myFunction(5, 3); // call the function
    printf("Result is = %d\n", result);
    return 0;
}

/* Function definition */
int myFunction(int x, int y)
{
    return x + y;
}