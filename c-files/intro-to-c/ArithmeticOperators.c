#include <stdio.h>

int main()
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

    float z = x / (float)2;
    int sum = x + y;

    printf("%f\n", z);
    printf("Sum is equal to: %d\n", sum);

    return 0;
}