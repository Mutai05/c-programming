#include <stdio.h>
#include <string.h>

/*
 * stringFunctions - demonstrates string functions
 */

int stringFunctions(void)
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%zu\n", strlen(alphabet));

    return (0);
}

/*
 * sizeOf - It is also important that you know that sizeof will always return
 *
 * the memory size (in bytes), and not the actual string length:
 */

int sizeOf(void)
{
    char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Length is: %zu\n", strlen(alphabet));
    printf("Size is: %d\n", (int)sizeof(alphabet));

    return 0;
}

/*
 * concatenateStrings - To concatenate (combine) two strings,
 *
 * you can use the strcat() function:
 */

int concatenateStrings(void)
{
    char str1[20] = "Hello ";
    char str2[] = "World!";

    /* Concatenate str2 to str1 (the result is stored in str1) */
    strcat(str1, str2);

    /* Print str1 */
    printf("%s\n", str1);

    return (0);
}

/*
 * copyStrings - To copy the value of one string to another,
 * you can use the strcpy() function:
 */

int copyStrings(void)
{
    char str1[20] = "Hello C World!";
    char str2[20];

    /* Copy str1 to str2 */
    strcpy(str2, str1);

    /* Print str2 */
    printf("%s\n", str2);

    return 0;
}

/*
 * main - the main function of the program
 */

int main(void)
{
    stringFunctions();
    sizeOf();
    concatenateStrings();
    copyStrings();

    return (0);
}
