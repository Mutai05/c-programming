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
    scanf(" %C", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if (op == '+')
    {
        printf("%.0f\n", num1 + num2);
    }
    else if (op == '-')
    {
        printf("%.0f\n", num1 - num2);
    }
    else if (op == '*')
    {
        printf("%.0f\n", num1 * num2);
    }
    else if (op == '/')
    {
        printf("%.0f\n", num1 / num2);
    }
    else
    {
        printf("Invalid operator\n");
    }
}