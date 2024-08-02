#include <stdio.h>

float CtoF(float n);

int main()
{
    float n;
    printf("Enter temperature in Degree Celsius:\n");
    scanf("%f", &n);
    printf("Temperature in Degree Fahrenheit is: %f.\n", CtoF(n));
    return 0;
}

float CtoF(float n)
{
    float f = (n * 1.8) + 32;
    return f;
}