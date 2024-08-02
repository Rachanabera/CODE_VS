#include <stdio.h>

int main()
{
    int a[3][3], sum = 0;
    printf("Enter Array elements:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == j || i + j == 2)
            {
                sum = sum + a[i][j];
            }
        }
    }
    printf("Enter the sum: %d\n", sum);
    return 0;
}

/*
   0 1 2

0  1 2 3
1  1 2 3
2  1 2 3

this will work for only 3 by 3 matrices


*/