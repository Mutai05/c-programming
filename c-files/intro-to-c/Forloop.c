#include <stdio.h>

/*
 * When you know exactly how many times you want to loop through a block of code,
 * use the for loop instead of a while loop:
 */

int forLoop(void)
{
    int i;

    for (i = 1; i < 10; i++)
    {
        printf("%d\n", i);
    }
}

int main(void)
{
    forLoop();

    return (0);
}
