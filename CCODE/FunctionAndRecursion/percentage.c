#include <stdio.h>

float percentage(int math, int science, int sanskrit);

int main()
{
    float math, science, sanskrit;
    printf("Enter marks of Math, Science, Sanskrit (per subject maximum marks is 100):\n");
    scanf("%f%f%f", &math, &science, &sanskrit);
    printf("Your percentage is: %f%%.\n", percentage(math, science, sanskrit));
    return 0;
}

float percentage(int math, int science, int sanskrit)
{
    return ((math + science + sanskrit)/300) * 100;
}