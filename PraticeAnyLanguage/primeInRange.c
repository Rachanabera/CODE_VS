//WAP to print all prime numbers in a range  (range from user)
#include <stdio.h>

int main()
{
    int start, end, count = 0;
    printf("Enter Start of range:\n");
    scanf("%d", &start);
    printf("Enter End of range:\n");
    scanf("%d", &end);
    for(int i = start; i <= end; i++)
    {
        count = 0;
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
            continue;
        }
        if(count == 0)
        {
            printf("%d\n", i);
        }
    }
}