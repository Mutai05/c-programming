#include <stdio.h>

/*
 * Strings are used for storing text/characters.
 * For example, "Hello World" is a string of characters.
 */

int cStrings()
{
    char greetings[] = "Hello World!\n";

    printf("%s", greetings);
}

int main()
{
    cStrings();

    return (0);
}