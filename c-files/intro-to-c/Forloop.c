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
        printf("%d\n\n", i);
    }
}

int evenValues(void)
{
    int x;

    for (x = 0; x <= 10; x = x + 2)
    {
        printf("%d\n", x);
    }
}

int main(void)
{
    forLoop();
    evenValues();

    return (0);
}
