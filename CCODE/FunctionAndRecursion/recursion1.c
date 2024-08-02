#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main()
{
    int n;
    printf("Enter a number who's factorial you want to find:\n");
    scanf("%d", &n);
    printf("The factorial of %d is %d.\n", n, factorial(n));
    return 0;
}

int factorial(int n)
{
    int f = n;
    if(n < 0)
    {
        printf("Factorial of negative number is not defined.\n");
        exit(0);
    }
    else if(n <= 1)
    {
        return n;
    }
    else
    {
        return f * factorial(n - 1);
    }
}