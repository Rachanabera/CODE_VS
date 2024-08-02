#include<stdio.h>
int main()
{
    int n,c = 0;
    printf("Enter a number to check if prime:\n");
    scanf("%d", &n);
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            c++;
            break;
        }
    }
    if(c > 0)
    {
        printf("Your number is not Prime.\n");
    }
    else
    {
        printf("Your number is Prime.\n");
    }
    return 0;
}