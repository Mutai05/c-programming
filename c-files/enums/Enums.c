#include <stdio.h>

enum Level
{
    LOW,
    MEDIUM,
    HIGH
};

int main()
{
    enum Level myVar = MEDIUM;

    printf("%d\n", myVar);

    return (0);
}