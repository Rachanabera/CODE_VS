#include <stdio.h>

float areaOfSquare(float s);
float areaOfCircle(float r);
float areaOfRectangle(float l, float b);

int main()
{
    float s,r,l,b;

    printf("Enter side of your Square:\n");
    scanf("%f", &s);
    printf("Area of your Square is: %f.\n", areaOfSquare(s));

    printf("Enter Radius of your Circle:\n");
    scanf("%f", &r);
    printf("Area of your Circle is: %f.\n", areaOfCircle(r));

    printf("Enter Length and Breath of your Rectangle:\n");
    scanf("%f%f", &l, &b);
    printf("Area of your Square is: %f.\n", areaOfRectangle(l, b));

    return 0;
}

float areaOfSquare(float s)
{
    return s * s;
}
float areaOfCircle(float r)
{
    return 3.14 * r * r;
}
float areaOfRectangle(float l, float b)
{
    return l * b;
}