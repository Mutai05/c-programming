#include <stdio.h>

/*
 * It is also possible to place a loop inside another loop.
 * This is called a nested loop.
 */

int nestedLoop(void)
{
    int i, j;

    /* Outer loop */

    for (i = 1; i <= 2; i++)
    {
        printf("Outer: %d\n", i);

        for (j = 1; j <= 3; j++)
        {
            printf(" Inner: %d\n\n", j);
        }
    }
}

int main(void)
{
    nestedLoop();

    return (0);
}