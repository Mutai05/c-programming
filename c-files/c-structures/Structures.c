#include <stdio.h>

/* Create a structure called myStructure */

struct myStructure
{
    int myNum;
    char myLetter;
};

int main()
{
    /* Create a structure variable of myStructure called s1 */

    struct myStructure s1;
    struct myStructure s2;

    /* Assign values to members of s1 */
    s1.myNum = 15;
    s1.myLetter = 'M';

    s2.myNum = 25;
    s2.myLetter = 'Q';

    /* Print values */
    printf("S1 My number is: %d\n", s1.myNum);
    printf("S1 My letter is: %c\n\n", s1.myLetter);

    printf("S2 My number is: %d\n", s2.myNum);
    printf("S2 My letter is: %c\n", s2.myLetter);

    return (0);
}