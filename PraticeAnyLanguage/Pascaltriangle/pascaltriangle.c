#include <stdio.h>
int main()
{
	int n,p=1;
	printf("Enter number of rows:\n");
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		for(int j = 1; j <= n - i; j++)
		{
			printf("  ");
		}
		for(int j = 0; j <= i; j++)
		{
			if(j == 0 || i == 0)
			{
				p = 1;
			}
			else
			{
				p = p * (i - j + 1) / j;
			}
			printf("%4d",p);
		}
		printf("\n");
	}
	return 0;
}