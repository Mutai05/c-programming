#include <stdio.h>

/*
 * Instead of writing many if..else statements, you can use the switch statement.
 */

int switchBreak(void)
{
    int day = 4;

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    }
}

/*
 * The default keyword specifies some code to run if there is no case match:
 */

int defaultSwitch(void)
{

    int day = 4;

    switch (day)
    {
    case 6:
        printf("Today is Thursday\n");
        break;

    case 7:
        printf("Today is Friday\n");
        break;

    default:
        printf("Looking forward to the Weekend\n");
    }
}

int main(void)
{
    switchBreak();
    defaultSwitch();

    return (0);
}