#include <stdio.h>
#include <stdlib.h>

int userAge()
{
    int age;
    printf("Enter your Age: \n");
    scanf("%d", &age);
    getchar();

    printf("Your are %d years old.\n", age);

    return age;
}

int userName()
{
    char name[20];
    printf("Enter your Name: \n");
    fgets(name, sizeof(name), stdin);

    printf("Your name is %s.\n", name);

    return (0);
}

int main()
{
    userAge();
    userName();

    return (0);
}