#include <stdio.h>

enum Level
{
    LOW = 30,
    MEDIUM = 60,
    HIGH = 90
};

int main()
{
    enum Level myVar = MEDIUM;

    printf("%d\n", myVar);

    return (0);
}
