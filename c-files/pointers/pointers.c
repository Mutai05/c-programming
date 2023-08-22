#include <stdio.h>

int main(void)
{

    /* access and modify the value at the memory location */

    int num = 42;
    int *ptr = &num;

    /* Access the value using a pointer */
    int value = *ptr; // value will be 42

    /* Modify the value using a pointer */
    *ptr = 99; // num is now 99

    printf("Value: %d\n", value); // Print the value
    printf("Modified num: %d\n", num); // Print the modified num

    return 0;
}
