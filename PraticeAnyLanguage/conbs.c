/*
Write a program to input basic salary of an employee and calculate
gross salary according to given conditions.
Basic Salary >= 30000 : HRA = 30%, DA = 95%
Basic Salary < 30000 : HRA = 10%, DA = 80%
Use conditional operator to solve above mentioned problem
*/
#include <stdio.h>
int main ()
{
    float bs, hra = 0, da = 0;
    printf("Enter basic salary:\n");
    scanf("%f", &bs);
    hra = bs >= 30000 ? (bs * 0.3) : (bs * 0.1);
    da = bs >= 30000 ? (bs * 0.95) : (bs * 0.8);
    printf("For this %f Salary Gross Salary is %f.\n", bs, (bs+hra+da));
    return 0;
}