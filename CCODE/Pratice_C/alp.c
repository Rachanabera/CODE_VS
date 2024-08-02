// WAP in C to print all the letter in English alphabet using a pointer
#include <stdio.h>
int main()
{
    char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *p = a; // or we can write char *p = &a[0];
    while (*p != '\0')
    {
        printf("%c, ", *p);
        p++;
    }
    printf("\n");
    return 0;
}