#include <stdio.h>
void main()
{
    char n[] = {'Z','A','I','D','\0'};
    char a[] = "Zaid";
    char b[] = "SHAIKH";
    printf("%s\n",a);
    printf("Enter your name:\n");
    scanf("%s", a);
    printf("So your name is %s\n",a);
    /*
    While using scanf or printf to I/O "a" string
    which is a array and is defined as say a[] but
    to I/O we only use the array's name tha is 'a'.
    */
}