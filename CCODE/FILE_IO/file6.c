/*
Make a program to read 5 integers from a file.
(before running this code make sure to put 5 number in text.txt file (example 1 2 3 4 5))
*/
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("text.txt", "r");
    int n;
    fscanf(fptr, "%d", &n);
    printf("number: %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number: %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number: %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number: %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number: %d\n", n);
    /*
    int n;
    while(fscanf(fptr, "%d", &n) != EOF)
    {
        printf("Character: %d\n", n);
    }
    */
    fclose(fptr);
    return 0;
}