#include<stdio.h>
#include <string.h>
void main()
{
    // here the value is already fixed
    char a[] = "Zaid";
    printf("The length of of your name is : %d\n", strlen(a));
    char b[50];
    /*
    here when we take value from user it need to add \0
    at the end to separate the rest of the memory given
    (that is 50) from the String received to identify
    the String given by user which is placed in the beginning
    of the array
    */
    printf("Enter your name:\n");
    fgets(b,50,stdin);
    printf("The length of of your name is : %d\n", strlen(b));
}