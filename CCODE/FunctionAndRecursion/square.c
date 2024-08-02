#include <stdio.h>
#include <math.h>

float square(float n);

int main()
{
    float n;
    printf("Enter a number to find it's square:\n");
    scanf("%f", &n);
    printf("Square of your number is: %f", square(n));
    return 0;
}

float square(float n)
{
    return pow(n, 2); //return n*n;
}