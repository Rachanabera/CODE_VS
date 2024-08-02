#include <stdio.h>

void P(char a[]);
void RP(char a[]);

void main()
{
    char n[] = {'Z','A','I','D','\0'};
    char a[] = "ZAID";
    char b[] = "SHAIKH";
    P(a);
    P(b);
    RP(b);//RP(b);
}

void P(char a[])
{
    for (int i = 0; a[i] !='\0'; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
}

void RP(char a[])// this is not a a perfect program
{
    int c=0;
    for (int i = 0; a[i] !='\0'; i++)
    {
        c++;
    }
    printf("String length is: %d\n",c);
    for (int i = c - 1; a[i] >= 0; i--)
    {
        printf("%c", a[i]);
    }
    
    printf("\n");
}