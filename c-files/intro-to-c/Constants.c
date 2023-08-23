#include <stdio.h>

/*
 * declareConstant - This function demonstrates the use of constants in C.
 *
 * constant = fixed value that cannot be altered by the program during its execution
 */

int declareConstant(void)
{

    const float PI = 3.14159;
    const int MINSPERHOUR = 60;

    printf("%.2f\n", PI);
    printf("%i\n", MINSPERHOUR);
}

/*
 * main - The main function of the program
 *
 * Return - Always 0
 */

int main(void)
{

    declareConstant();
    return (0);
}