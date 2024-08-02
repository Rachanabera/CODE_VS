#include <stdio.h>

void hello();
void goodbye();

int main()
{
    hello();
    return 0;
}

void hello()
{
    printf("Hello.\n");
    goodbye();
}

void goodbye()
{
    printf("Goodbye.\n");
}