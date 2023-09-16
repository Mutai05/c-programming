#include <stdio.h>

/*
 * Strings are used for storing text/characters.
 * For example, "Hello World" is a string of characters.
 */

int cStrings()
{
    char greetings[] = "Hello World!";

    printf("%s\n", greetings);
}

/*
 * Since strings are actually arrays in C, you can access a string by referring to its
 * index number inside square brackets [].
 * This example prints the first character (0) in greetings:
 */

int accessStrings()
{
    char greetings[] = "Hello World";

    printf("%c\n", greetings[0]);
}

/*
 * To change the value of a specific character in a string,
 * refer to the index number, and use single quotes:
 */

int modifyStrings()
{
    char greetings[] = "Hello World!";
    greetings[0] = 'J';

    printf("%s\n", greetings);
}

/*
 * You can also loop through the characters of a string, using a for loop:
 */

int loopString()
{
    char carName[] = "Volvo";
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%c\n", carName[i]);
    }
}

int main()
{
    cStrings();
    accessStrings();
    modifyStrings();
    loopString();

    return (0);
}