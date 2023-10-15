#include <stdio.h>
#include <stdlib.h>

int main()
{

    int luckyNumbers[] = {4, 8, 12, 16, 20, 24};
    luckyNumbers[1] = 200;

    printf("%d\n", luckyNumbers[1]);

    return (0);
}