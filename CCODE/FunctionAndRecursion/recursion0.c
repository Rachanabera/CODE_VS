#include <stdio.h>

int sum(int n);

int main()
{
    int n;
    printf("Enter a number for sum of n natural numbers:\n");
    scanf("%d", &n);
    printf("The sum is: %d.\n", sum(n));
    return 0;
}

int sum(int n)
{
    // this is base case
    if(n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}
/*
how return n + sum(n - 1); works if n = 5 ?

1. 5 + sum(5 - 1) =>  5 + sum(4)
2. 4 + sum(3)
3. 3 + sum(2)
4. 2 + sum(1)
5. 1 + sum(0)

sum(0) is a base case because there is no case below this
or there is no other case that must be preformed before the
execution of this case.
this case has a pre-defined outcome i.s. programmer has set
a condition so that recursion can actually stop instead of
a infinite loop.

sum(0) returns 0 to line 5 (Because code line 16 to 19)

so 1 + sum(0) returns 1 as sum of 1 + 0, as the answer of sum(1)

then 2 + sum(1) returns 3 as sum of 2 + 1 as the answer of sum(2)

then this process continues
*/