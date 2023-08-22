#include <stdio.h>

int arithmeticOperators(void)
{

    // arithmetic operators

    //  + (addition)
    //  - (subtraction)
    //  * (multiplication)
    //  / (division)
    //  % (modulus) Reminder of any division
    //  ++ increment
    //  -- decrement

    //  int z = x + y;
    //  int z = x - y;
    //  int z = x * y;
    //  int z = x / (float) y;

    //  x++;
    //  y--;

    // Take note integer division

    /*  augmented assignment operators = used to replace a statement where an operator takes
                                        a variable as one of its arguments and then assigns
                                        the result back to the same variable
                                        int sum = x + 1
                                        x+=1

    */

    int x = 5;
    int y = 2;

    float z = (float)x / y;
    int sum = x + y;

    printf("%.1f\n", z);
    printf("Sum is equal to: %d\n", sum);

    return 0;
}

/*  Set Decimal Precision */

int decimalPrecision(void)
{
    float myFloatNum = 3.5;

    /* Default will show 6 digits after the decimal point */
    printf("%f\n", myFloatNum);

    /* Only show 1 digit */
    printf("%.1f\n", myFloatNum);

    /* Only show 2 digits */
    printf("%.2f\n", myFloatNum);

    /* Only show 4 digits */
    printf("%.4f\n", myFloatNum);
}

int main(void)
{
    arithmeticOperators();
    decimalPrecision();
    return (0);
}