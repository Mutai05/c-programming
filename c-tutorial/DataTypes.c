#include <stdio.h>
#include <stdlib.h>

int main()
{

    int age = 40;
    double gpa = 35.0;
    char grade = 'A';
    char phrase[] = "Hello World!";

    printf("Print Age: %d\n", age);
    printf("Print GPA: %.1lf\n", gpa);
    printf("Print Grade: %c\n", grade);
    printf("Print Phrase: %s\n", phrase);

    return (0);
}