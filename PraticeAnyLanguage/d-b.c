//Write a C program to convert a decimal number into binary
#include<stdio.h>
int main ()
{
    int dn,bn[32];
    printf("Enter a decimal number to convert in to binary:\n");
    scanf("%d", &dn);
    int i = 0;
    while (dn > 0)
    {
        bn[i] = dn % 2;
        dn = dn / 2;
        i++;
    }
    
    printf("your number in binary form is:\n");
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%d ", bn[j]);
    }    
    return 0;
}