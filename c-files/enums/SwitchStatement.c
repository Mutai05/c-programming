#include <stdio.h>

enum Level
{
    LOW = 1,
    MEDIUM,
    HIGH
};

int main()
{
    enum Level myVar = MEDIUM;

    switch (myVar)
    {
    case LOW:
        printf("Low Level\n");
        break;
    case MEDIUM:
        printf("Medium level\n");
        break;
    case HIGH:
        printf("High level\n");
        break;
    default:
        printf("Unknown level\n");
    }

    return 0;
}