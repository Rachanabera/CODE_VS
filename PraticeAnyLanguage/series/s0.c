/*
Write a program to calculate the following series Write a program
in C to find the sum of the series [1 - X^2/2! + X^4/4!..............].
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n, j = 2;
    float x, sum = 1.0;
    printf("Enter a number of terms for the series:\n");
    scanf("%d", &n);

    printf("Enter a value for x:\n");
    scanf("%f", &x);
    
    for(int i = 1; i <   n; i++)
    {
        int f = 1;
        for(int k = 1; k <= j; k++)
        {
            f *= k;
        }
        if(i % 2 == 0)
        {
            sum += pow(x, j)/f;
        }   
        else
        {
            sum -= pow(x, j)/f;
        }
        j += 2;
    }
    printf("The sum of the series upto %d is: %.4f\n", n, sum);
    return 0;
}