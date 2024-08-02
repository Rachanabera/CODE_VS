//just inefficient
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c)
    {
        printf("%d is the greatest\n",a);
    }
    if(b > a && b > c)
    {
        printf("%d is the greatest\n",b);
    }
    if(c > a && c > b)
    {
        printf("%d is the greatest\n",c);
    }
    return 0;
}