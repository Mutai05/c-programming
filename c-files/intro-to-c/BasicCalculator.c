#include <stdio.h>
#include <stdlib.h>

int main()
{

    double num1;
    double num2;
    printf("Enter first numer: ");
    scanf("%lf", &num1);
    printf("Enter second numer: ");
    scanf("%lf", &num2);

    printf("Answer: %.2f\n", num1 + num2);
    return (0);
}