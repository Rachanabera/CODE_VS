#include<stdio.h>
void main()
{
    //just a way of taking input
    char a[100];
    char ch;
    int i = 0;
    printf("Enter a String:\n");
    while(ch != '\n')
    {
        scanf("%c", &ch);
        a[i] = ch;
        i++;
    }
    a[i] = '\0';
    puts(a);
}