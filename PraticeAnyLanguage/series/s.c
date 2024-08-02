// Write a program to calculate the series 1-1/2 + 1/3 – 1/4 +...upto n terms.
#include <stdio.h>
int main ()
{
    int n;
    float sum = 0;
    printf("Enter a number for the series:\n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            sum -= 1.0/i;
        }
        else
        {
            sum += 1.0/i;
        };
    }
    printf("The number of the series upto %d is: %.4f\n", n ,sum);
    return 0;
}