#include <stdio.h>
void main()
{
    char n[50];
    printf("Enter your full name:\n");
    scanf("%s", n);
    printf("Your name is %s",n);
    /*
    Example name "Zaid Shaikh" here only Zaid will be
    printed because %s have the capability to only input 
    String till the input in broken by space(" ")
    that is it cannot input multi-word Strings,
    So I used get() and puts() in program String2.c.
    */
}