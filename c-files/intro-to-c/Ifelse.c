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
		printf("X is greater than y\n");
	}
}

int main(void)
{
	ifElse();
	testVariables();
	return (0);
}
