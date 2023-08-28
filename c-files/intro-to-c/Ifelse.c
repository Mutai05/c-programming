#include <stdio.h>

/*
 * In the example below, we test two values to find out if 20 is greater than 18.
 * If the condition is true, print some text:
 */

int ifElse(void)
{
	if (20 > 18)
	{
		printf("20 is greater than 18\n");
	}
}

/* We can also test variables */

int testVariables(void)
{
	int x = 12;
	int y = 8;

	if (x > y)
	{
		printf("x is greater than y\n");
	}
}

/*
 * Use the else statement to specify a block of code
 * to be executed if the condition is false.
 */

int greetingTimes(void)
{
	int time = 20;

	if (time < 18)
	{
		printf("Good day\n");
	}
	else
	{
		printf("Good evening\n");
	}
}

/*
 * Use the else if statement to specify
 * a new condition if the first condition is false.
 *
 */

int printGreetings(void)
{

	int time = 15;

	if (time < 11)
	{
		printf("Good morning!\n");
	}
	else if (time < 18)
	{
		printf("Good afternoon!\n");
	}
	else
	{
		printf("Good evening!\n");
	}
}

int checkNumber(void)
{

	int myNum = 30;

	if (myNum > 0)
	{
		printf("This is a positive number.\n\n");
	}
	else if (myNum < 0)
	{
		printf("This is a negative number.\n\n");
	}
	else
	{
		printf("The value is zero\n\n.");
	}
}

/*
 * Short Hand If...Else (Ternary Operator)
 *
 */
int ShortHandIf(void)
{
	int time = 20;
	(time < 18) ? printf("Good day.\n") : printf("Good evening.\n");
}

int main(void)
{
	ifElse();
	testVariables();
	greetingTimes();
	printGreetings();
	checkNumber();
	ShortHandIf();
	return (0);
}
