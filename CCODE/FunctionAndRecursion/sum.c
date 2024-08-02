#include <stdio.h>

int sum(int a, int b);

int main()
{
    int a, b;
    printf("Enter first number:\n");
    scanf("%d", &a);
    printf("Enter Second number:\n");
    scanf("%d", &b);
    printf("Sum: %d", sum(a, b));
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}