#include <stdio.h>
#include <string.h>

/* Create a structure called Student */

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{

    struct Student student1;
    strcpy(student1.name, "Kelv");
    strcpy(student1.major, "Business");
    student1.age = 22;
    student1.gpa = 3.2;

    struct Student student2;
    strcpy(student2.name, "Kelvin");
    strcpy(student2.major, "Business Studies");
    student2.age = 25;
    student2.gpa = 3.5;

    printf("%s\n", student2.name);
}