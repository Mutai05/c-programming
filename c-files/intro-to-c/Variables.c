#include <stdio.h>

int main()
{

    // variable =   Allocated space in memory to store a value.
    //              We refer to a variable's name to acces the stored value.
    //              That variable now behaves as if it is the value it contains.
    //              BUT we need to declare what type of data we are storing.

    // Good
    int minutesPerHour = 60;

    // OK, but not so easy to understand what m actually is
    int m = 60;

    int x;       // declaration
    x = 123;     // initialization
    int y = 321; // declaration + initialization

    int age = 21;        // integer
    float gpa = 2.05;    // floating point number
    char grade = 'C';    // single character
    char name[] = "Bro"; // array of characters

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);

    return 0;
}