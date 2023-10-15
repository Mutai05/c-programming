#include <stdio.h>
#include <stdlib.h>

void sayHi()
{
    printf("Hello User\n");
}

void hello(char name[], int age)
{
    printf("Hello %s, you are %d\n", name, age);
}

int main()
{
    printf("Top\n");
    sayHi();
    printf("Bottom\n");
    hello("Kelv", 40);
    hello("Ess", 36);
    hello("Jacq", 32);

    return (0);
}
