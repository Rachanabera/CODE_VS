#include <stdio.h>

void printHW(int n);

int main()
{
    int n;
    printf("Enter how many times you want to print:\n");
    scanf("%d", &n);
    printHW(n);
    return 0;
}

void printHW(int n)
{
    if(n == 0)
    {
        return;
    }
    printf("hello, world!\n");
    printHW(n - 1);
}