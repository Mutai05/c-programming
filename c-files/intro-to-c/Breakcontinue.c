/* Break and continue*/

#include <stdio.h>

int breakContinue()
{
    int i;

    for (i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        printf("%d\n\n", i);
    }
}

int breakCont()
{
    int i = 0;

    while (i < 10)
    {
        if (i == 4)
        {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }
}

int main()
{
    breakContinue();
    breakCont();

    return (0);
}