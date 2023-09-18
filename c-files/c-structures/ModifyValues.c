#include <stdio.h>
#include <string.h>

/* Create a structure */
struct myStructure
{
    int myNum;
    char myLetter;
    char myString[30];
};

/*
 * If you want to change/modify a value,
 * you can use the dot syntax (.).
 *
 * And to modify a string value, the strcpy()
 * function is useful again:
 *
 */

int main()
{
    /* Create a structure variable and assign values to it */
    struct myStructure s1 = {13, 'B', "Some text"};

    /* Modify values */
    s1.myNum = 30;
    s1.myLetter = 'C';
    strcpy(s1.myString, "Something else");

    /* Print values */
    printf("%d\n %c\n %s\n", s1.myNum, s1.myLetter, s1.myString);

    return 0;
}