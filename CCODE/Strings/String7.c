#include<stdio.h>
#include<string.h>

void salting(char s[]);

void main()
{
    char a[100];
    char ch;
    int i = 0;
    printf("Enter a Password:\n");
    scanf("%s",a);
    printf("Your password is:\n");
    puts(a);
    salting(a);
    /*
    while(ch != '\n')
    {
        scanf("%c", &ch);
        a[i] = ch;
        i++;
    }
    a[i] = '\0';
    This wont be used because I THINK
    there is some problem with \0
    */
}
void salting(char s[])
{
    char salt[] = "123";
    char ns[100];
    strcpy(ns,s);
    strcat(ns,salt);
    printf("Your password after salting is:\n");
    puts(ns);
}