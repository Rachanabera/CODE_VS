/*
Create a structure to store Complex Number.
Then make a function to return sum 
of n numbers
*/

#include <stdio.h>

typedef struct Complex {
    int r;
    int i;
}C;

void input(int n, C cmx[]);
void sum(int n, C cmx[]);
void print(int n, C cmx[]);

int main()
{
    int n = 0;
    printf("Enter number of Complex Number to find their Sum: \n");
    while(n < 2)
    {
        printf("In order to find sum there should at least two vectors.\n");
        scanf("%d", &n);
    }
    C cmx[n+1];
    input(n, cmx);
    return 0;
}

void input(int n, C cmx[])
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter the real part and then the imaginary part of your Complex:\n");
        scanf("%d %d", &cmx[i].r, &cmx[i].i);
    }
    sum(n, cmx);
}

void sum(int n, C cmx[])
{
    cmx[n].r = 0;
    cmx[n].i = 0;
    for(int i = 0; i < n; i++)
    {
        cmx[n].r += cmx[i].r;
        cmx[n].i += cmx[i].i;
    }
    print(n, cmx);
}

void print(int n, C cmx[])
{
    printf("The sum of your Complex Numbers is: %d + %di\n", cmx[n].r, cmx[n].i);
}