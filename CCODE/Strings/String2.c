#include <stdio.h>
void main()
{
    char n[50];
    printf("Enter your full name:\n");
    gets(n);
    puts(n);
    /*
    gets() it input even multi-word String,
    which is not a good thing and also dangerous,
    and outdated and is easily hackable,
    compiler also shows a warning,
    might not show on all device.
    To avoid problems we use
    fgets(array_name, array_size, file_name)
    */
    printf("Enter your full name:\n");
    fgets(n,50,stdin);// stdin means standard input.
    /*
    stops when n-1 char input because one memory block
    is use to end the String with '\0' so nth location
    is used to null
    or stops when new line is entered
    */
    puts(n);//this has \n inbuilt unlike printf("");
}