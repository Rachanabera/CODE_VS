// WAP in C to find the maximum number between two numbers using a pointer.
#include <stdio.h>
void max(int *a, int *b);

int main()
{
    int a,b;
    printf("Enter any two numbers:\n");
    scanf("%d %d",&a,&b);
    max(&a,&b);
    return 0;
}

void max(int *a, int *b)
{
    if ( (*a) > (*b) )
    {
        printf("a = %d in greater than b = %d.\n",*a,*b);
    }
    else if ( (*b) > (*a) )
    {
        printf("b = %d in greater than a = %d.\n",*b,*a);
    }
    else
    {
        printf("a = %d and b = %d are equal.\n",*a,*b);
    }
}