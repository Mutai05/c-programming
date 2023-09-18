#include <stdio.h>
#include <string.h>

/* Create a structure called myStructure */

struct myStructure
{
    char myString[30];
};

int main()
{
    /* Create a structure variable of myStructure called s1 */

    struct myStructure s1;

    /* Assign a value to the string using the strcpy function */
    strcpy(s1.myString, "Hello World!");

    /* Print values */
    printf("My String is: %s\n", s1.myString);

    return (0);
}