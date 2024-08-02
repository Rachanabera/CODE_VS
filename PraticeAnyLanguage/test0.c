#include<stdio.h>
int main()
{
    int n,a=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("the table of %d is: \n",n);
    for(int i = 1; i <= 10; i++)
    {
        a = n * i;
        printf("%d * %d = %d\n", n, i, a);
    }
    return 0;
}