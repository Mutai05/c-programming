#include <stdio.h>

// Create a structure
struct myStructure
{
    int myNum;
    char myLetter;
    char myString[30];
};

int main()
{
    /* Create a structure variable and assign values
     * to members of a structure variable at declaration time,
     *  in a single line.
     */

    struct myStructure s1 = {13, 'B', "Some text"};

    // Print values
    printf("%d\n %c\n %s\n", s1.myNum, s1.myLetter, s1.myString);

    return 0;
}