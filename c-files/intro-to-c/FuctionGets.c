#include <stdio.h>
#include <string.h>

int fGets()
{
    char fullName[30];

    printf("Enter your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s\n", fullName);
}

int main()
{
    fGets();

    return (0);
}