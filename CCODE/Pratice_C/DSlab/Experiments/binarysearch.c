#include <stdio.h>
#include <conio.h>
# define N 5
int main()
{
	int i, j, f, c = 0;
	int a[N];
	int first = 0, mid = 0, last = N-1;
	clrscr();
	printf("Enter your numbers:\n");
	for(i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}

	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N-1-i; j++)
		{
			int temp = 0;
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	printf("Enter the number that need to be searched:\n");
	scanf("%d",&f);

	printf("Your list of number in ascending order:\n");
	for(i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	while(first <= last)
	{
		mid = (first+last)/2;
		if (f == a[mid])
		{
			c = mid;
			break;
		}
		else if (f > a[mid])
		{
			first = mid + 1;
		}
		else
		{
			last = mid - 1;
		}
	}

	if (c > 0)
	{
		printf("Number found at index position %d.\n", c);
	}
	else
	{
		printf("Number not found.\n");
	}
	getch();
	return 0;
}