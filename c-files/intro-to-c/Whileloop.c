#include <stdio.h>

/*
 * The while loop loops through a block of
 * code as long as a specified condition is true:
 */

int whileLoop(void)
{
    /*
     * In the example below, the code in the loop will run, over and over again,
     * as long as a variable (i) is less than 5:
     */

    int i = 0;

    while (i < 5)
    {
        printf("%d\n\n", i);
        i++;
    }
}

int doWhileLoop(void)
{

    int i = 0;

    do
    {
        printf("%d\n", i);
        i++;
    }

    while (i < 5);
}

int main(void)
{
    whileLoop();
    doWhileLoop();

    return (0);
}