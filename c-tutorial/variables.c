#include <stdio.h>
#include <stdlib.h>

int main()
{

    char charactersName[] = "Kelvin";
    int charactersAge = 25;

    printf("There was once a man named %s\n", charactersName);
    printf("He was %d years old\n", charactersAge);

    charactersAge = 30;
    printf("He really liked the name %s\n", charactersName);
    printf("But did not like being %d.\n", charactersAge);
    return (0);
}