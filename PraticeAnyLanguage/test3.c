#include <stdio.h>

double factorial(int n);

int main()
{
    int n;
    printf("Enter a number to get it's factorial:\n");
    scanf("%d", &n);
    printf("The factorial of %d is %f", n, factorial(n));
    return 0;
}

double factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}