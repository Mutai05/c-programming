#include <stdio.h>
#include <stdlib.h>

int userAge()
{
    int age;
    printf("Enter your Age: \n");
    scanf("%d", &age);

    printf("Your are %d years old.\n", age);

    return (0);
}

int userName()
{
    char name[20];
    printf("Enter your Name: \n");
    scanf("%s", name);

    printf("Your name is %s.\n", name);

    return (0);
}

int main()
{
    userAge();
    userName();

    return (0);
}