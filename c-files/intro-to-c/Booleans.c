#include <stdio.h>
#include <stdbool.h>

/* Import the boolean header file */

int booleansInC(void)
{
    bool isProgrammingFun = true;
    bool isPorkTasty = false;

    printf("%d\n", isProgrammingFun);
    printf("%d\n", isPorkTasty);
    printf("%d\n\n", isProgrammingFun == isPorkTasty);
}

/* Returns 1 (true) because 10 is greater than 9 */

int comparingValues(void)
{
    printf("%d\n\n", 10 > 9);
}

int comparingTwoValues(void)
{
    int x = 10;
    int y = 9;

    printf("%d\n\n", x > y);
}

/* We use the equal to (==) operator to compare different value */

int comparingVariables(void)
{
    /* Returns 1 (true), because 10 is equal to 10 */
    printf("%d\n", 10 == 10);

    /* Returns 0 (false), because 10 is not equal to 15 */
    printf("%d\n", 10 == 20);

    /* Returns 0 (false) because 5 is not equal to 55 */
    printf("%d\n\n", 10 == 5);
}

/*
 * Let's think of a "real life example" where we need to find out if a person is old enough to vote.
 */

int checkAge(void)
{
    int myAge = 27;
    int votingAge = 18;

    printf("%d\n\n", myAge >= votingAge);
}

/*
 * Wrap the code above in an if...else statement,
 * so we can perform different actions depending on the result:
 */

int ifElseStatement(void)
{
    int myAge = 28;
    int votingAge = 18;

    if (myAge >= votingAge)
    {
        printf("Old Enough to Vote!\n");
    }
    else
    {
        printf("Not Old Enough to Vote.\n\n");
    }
}

int main(void)
{
    booleansInC();
    comparingValues();
    comparingTwoValues();
    comparingVariables();
    checkAge();
    ifElseStatement();
    return (0);
}