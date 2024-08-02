#include <stdio.h>
int main()
{
    int n;
    float f = 1, sum = 0;
    printf("Enter number of terms to get the sum of series:\n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        f = 1;
        for(int j = 1; j <= i; j++)
        {
            f = f * j;
        }
        sum += 1.0/f;
    }
    printf("The sum of series is %f.\n", sum);
    return 0;
}