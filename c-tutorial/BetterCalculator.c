#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if (op == '+')
    {
        printf("%.2lf\n", num1 + num2);
    }
    else if (op == '-')
    {
        printf("%.2lf\n", num1 - num2);
    }
    else if (op == '*')
    {
        printf("%.2lf\n", num1 * num2);
    }
    else if (op == '/')
    {
        if (num2 != 0) // Check for division by zero
        {
            printf("%.2lf\n", num1 / num2);
        }
        else
        {
            printf("Division by zero is not allowed.\n");
        }
    }
    else
    {
        printf("Invalid operator\n");
    }

    return 0;
}